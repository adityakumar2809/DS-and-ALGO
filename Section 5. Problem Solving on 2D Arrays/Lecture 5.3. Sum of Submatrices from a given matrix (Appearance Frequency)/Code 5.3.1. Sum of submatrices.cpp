#include <iostream>
using namespace std;

int submatrixSum(int a[][100], int m, int n)
{
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j] * (((i+1)*(j+1))*((n-i)*(m-j)));
        }
    }

    return sum;
}

int main()
{

    int a[100][100] = {0};
    int m, n, sum;

    // Input the dimensions of array
    cout << "Enter dimensions of array: ";
    cin >> m >> n;

    // Iterating over the array;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element at index (" << i << ", " << j << ") :";
            cin >> a[i][j];
        }
    }

    sum = submatrixSum(a, m, n);

    cout << "Sum: " << sum << endl;

    return 0;
}