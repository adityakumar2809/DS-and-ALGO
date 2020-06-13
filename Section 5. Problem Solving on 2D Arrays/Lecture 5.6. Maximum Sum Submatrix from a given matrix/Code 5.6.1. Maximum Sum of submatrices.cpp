#include <iostream>
using namespace std;

int maxSubmatrixSum(int a[][100], int m, int n)
{
    int i = m - 1, j = n - 1;
    int sum = a[i][j];

    while (i > 0 && j > 0)
    {
        if (a[i][j - 1] >= sum && a[i][j - 1] >= a[i - 1][j])
        {
            sum = a[i][--j];
        }
        else if (a[i - 1][j] >= sum && a[i - 1][j] >= a[i][j - 1])
        {
            sum = a[--i][j];
        }
        else
        {
            break;
        }
    }

    return sum;
}

int main()
{

    int a[100][100] = {0};
    int m, n, temp, sum;

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

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            temp = a[i][j];
            if (i == m - 1)
            {
                if (j == n - 1)
                {
                    a[i][j] = temp;
                }
                else
                {
                    a[i][j] = temp + a[i][j + 1];
                }
            }
            else
            {
                if (j == n - 1)
                {
                    a[i][j] = temp + a[i + 1][j];
                }
                else
                {
                    a[i][j] = temp + a[i + 1][j] + a[i][j + 1] - a[i + 1][j + 1];
                }
            }
        }
    }

    sum = maxSubmatrixSum(a, m, n);

    cout << "Sum: " << sum << endl;

    return 0;
}