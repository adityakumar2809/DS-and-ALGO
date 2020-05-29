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

bool comparator(int a, int b)
{
    /* To define the sorting condition */

    return (a > b); // Condition for descending order
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
    sort(arr, arr + n, comparator); // Passing starting and ending address of the array along with comparator function
    display(arr, n);

    return 0;
}