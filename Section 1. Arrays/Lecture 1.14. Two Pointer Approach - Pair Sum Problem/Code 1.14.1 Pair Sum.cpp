#include <iostream>
#include <algorithm>
using namespace std;

void get(int a[], int n)
{
    /* To input 'n' values into an array */

    cout << "Enter the elements of the array separated by spaces or newline: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void pairSum(int a[], int n, int key)
{
    /* To find pairs of elements whose sum is equal to key */

    int i = 0, j=n-1;
    while(i<j)
    {
        int sum = a[i]+a[j];
        if(sum == key)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            j--;
            i++;
        }
        else if(sum > key)
        {
            j--;
        }
        else
        {
            i++;
        }
        
    }
    
}

int main()
{
    /* Code Execution Starts here */

    // An initialisation using this format initialises the number of elements as present in {} and rest by 0
    int arr[100] = {0};
    int n, key;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    get(arr, n);

    cout << "Enter the desired sum: ";
    cin >> key;

    sort(arr, arr+n);
    // Pre-requisite of the two pointer method is sorted array 
    pairSum(arr, n, key);

    return 0;
}