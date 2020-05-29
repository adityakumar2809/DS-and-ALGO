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

void linearSearch(int a[], int n, int key)
{
    /* To perform a linear search to find the key in an array */

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "The key " << key << " is found at index " << i << endl;
            return;
        }
    }
    cout << "The key " << key << " does not appear in the array" << endl;
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

    cout << "Enter the key to be searched: ";
    cin >> key;

    linearSearch(arr, n, key);

    return 0;
}