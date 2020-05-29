#include <iostream>
#include <climits>
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

void maximumSumSubarray(int a[], int n)
{
    /* To to find subarray of maximum sum from an array */

    int maximum_sum = INT_MIN, sum = INT_MIN;
    int left, right;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + a[k];
            }
            if (sum > maximum_sum)
            {
                maximum_sum = sum;
                left = i;
                right = j;
            }
        }
    }

    cout << "Maximum Sum: " << maximum_sum << endl;
    for (int i = left; i <= right; i++)
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
    maximumSumSubarray(arr, n);

    return 0;
}