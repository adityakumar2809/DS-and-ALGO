#include <iostream>
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

void generateSubarrays(int a[], int n)
{
    /* To generate all possible subarrays from an array */

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    /* Code Execution Starts here */

    // An initialisation using this format initialises the number of elements as present in {} and rest by 0
    int arr[100] = {0};
    int n;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    get(arr, n);
    generateSubarrays(arr, n);

    return 0;
}