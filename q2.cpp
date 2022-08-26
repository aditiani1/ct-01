// Name : Aditi Singh
// Roll : 2010990814
// Set no : 5
// Q : 2

#include <iostream>
#include <unordered_map>
using namespace std;
 
// Function to print all subarrays 
void printAllSubarrays(int num[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            // sum of elements in the array
            sum = sum + num[j];

            if (sum == 0) {
                // cout << " subarrays with zero sum are : ";
                cout<<"{";
                for(int p=i; p<=j; p++)
                {
                    cout << num[p] <<",";
                }
                
                cout << "}" <<endl;
                 }
        }
    }
}
 
int main()
{
    cout<<"Subarrays with zero-sum are: "<<endl;

    int num[] = { 4, 2, -3, -1, 0, 4};   //input 
    int n = sizeof(num)/sizeof(num[0]);  //size of the array
    printAllSubarrays(num, n);   //calling the print function
    return 0;
}