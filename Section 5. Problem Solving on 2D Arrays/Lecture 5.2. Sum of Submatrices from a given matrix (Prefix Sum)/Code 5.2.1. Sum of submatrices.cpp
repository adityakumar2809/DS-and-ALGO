#include <iostream>
using namespace std;

int submatrixSum(int a[][100], int m, int n)
{
    int sum = 0;

    for (int ti = 0; ti < m; ti++)
    {
        for (int tj = 0; tj < n; tj++)
        {
            for (int bi = ti; bi < m; bi++)
            {
                for (int bj = tj; bj < n; bj++)
                {
                    if (ti == 0)
                    {
                        if (tj == 0)
                        {
                            sum += a[bi][bj];
                        }
                        else
                        {
                            sum += a[bi][bj] - a[bi][tj - 1];
                        }
                    }
                    else
                    {
                        if (tj == 0)
                        {
                            sum += a[bi][bj] - a[ti - 1][bj];
                        }
                        else
                        {
                            sum += a[bi][bj] - a[bi][tj - 1] - a[ti - 1][bj] + a[ti - 1][tj - 1];
                        }
                    }
                }
            }
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
            cin >> temp;
            if (i == 0)
            {
                if (j == 0)
                {
                    a[i][j] = temp;
                }
                else
                {
                    a[i][j] = temp + a[i][j - 1];
                }
            }
            else
            {
                if (j == 0)
                {
                    a[i][j] = temp + a[i - 1][j];
                }
                else
                {
                    a[i][j] = temp + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
                }
            }
        }
    }

    sum = submatrixSum(a, m, n);

    cout << "Sum: " << sum << endl;

    return 0;
}