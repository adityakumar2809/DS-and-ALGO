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

void display(int a[], int n)
{
    /* To display first 'n' values stored in an array */

    cout << "Elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
    sort(arr, arr + n); // Passing starting and ending address of the array
    display(arr, n);

    return 0;
}