#include <iostream>
#include <climits>
#include <algorithm> // imported for min, max but can be omitted
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

void largestAndSmallest(int a[], int n)
{
    /* To find the largest and smallest elements in an array */

    int largest = INT_MIN, smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
        smallest = min(smallest, a[i]);
    }
    cout << "The Largest element is " << largest << endl;
    cout << "The Smallest element is " << smallest << endl;
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
    largestAndSmallest(arr, n);

    return 0;
}