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

bool comparator(int a, int b)
{
    /* To define the sorting condition */

    return (a > b); // Condition for descending order
}

void bubbleSort(int a[], int n, bool (&cmp)(int a, int b))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (cmp(a[j + 1], a[j]))
            {
                swap(a[j], a[j + 1]);
            }
        }
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
    bubbleSort(arr, n, comparator);
    display(arr, n);

    return 0;
}