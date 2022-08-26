// Name : Aditi Singh
// Roll : 2010990814
// Set no : 5
// Q : 1

#include <iostream> 
#include <unordered_map>    //using stl
using namespace std;
 
void findMaxLenSubarray(int nums[], int n, int S)
{
 
    unordered_map<int, int> map;
 
    map[0] = -1;
    int length = 0;
    int last_index = -1;
    int target = 0;  //initial target
    for (int i = 0; i < n; i++)   //traversing the given array
    {
        target += nums[i];     // sum of elements 
   
        if (map.find(target) == map.end()) {
            map[target] = i;
        }
 
        if (map.find(target - S) != map.end() && length < i - map[target - S])
        {
            length = i - map[target - S];
            last_index = i;
        }
    }
     
    // print function for subarray
    cout<<"The longest subarray is ";
    cout<<"{";
    for(int i=(last_index - length + 1);i<=last_index;i++)
    {
        cout<<nums[i]<<",";
    }
    cout<<"}";
    cout<<" having length "<<(last_index - (last_index - length + 1) +1);
}
 
int main()
{
    int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int target = 8;
	cout<<"Subarrays with sum "<<target<<" are : "<<endl;

    int n = sizeof(nums) / sizeof(nums[0]); //size of array
 
    findMaxLenSubarray(nums, n, target);  //calling the max subarray
 
    return 0;
}