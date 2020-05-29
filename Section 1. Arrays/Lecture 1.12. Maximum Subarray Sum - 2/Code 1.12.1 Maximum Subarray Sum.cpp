#include <iostream>
#include <climits>
using namespace std;

void get(int a[], int n, int cs[])
{
    /* To input 'n' values into an array */

    cout << "Enter the elements of the array separated by spaces or newline: ";
    cin >> a[0];
    cs[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        cs[i] = cs[i - 1] + a[i];
    }
}

void maximumSumSubarray(int a[], int n, int cs[])
{
    /* To to find subarray of maximum sum from an array */

    int maximum_sum = INT_MIN, sum = INT_MIN;
    int left, right;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = (i == 0 && j == 0) ? cs[0] : cs[j] - cs[i - 1];
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
    int arr[100] = {0}, cs[100] = {0};
    int n;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    get(arr, n, cs);
    maximumSumSubarray(arr, n, cs);

    return 0;
}