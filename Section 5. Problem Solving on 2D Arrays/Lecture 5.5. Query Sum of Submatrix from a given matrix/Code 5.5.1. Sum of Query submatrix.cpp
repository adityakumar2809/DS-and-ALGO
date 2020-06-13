#include <iostream>
using namespace std;

int submatrixSum(int a[][100], int Q[4])
{
    int sum = 0;

    if (Q[0] == 0)
    {
        if (Q[1] == 0)
        {
            sum = a[Q[2]][Q[3]];
        }
        else
        {
            sum = a[Q[2]][Q[3]] - a[Q[2]][Q[1] - 1];
        }
    }
    else
    {
        if (Q[1] == 0)
        {
            sum = a[Q[2]][Q[3]] - a[Q[0] - 1][Q[3]];
        }
        else
        {
            sum = a[Q[2]][Q[3]] - a[Q[2]][Q[1] - 1] - a[Q[0] - 1][Q[3]] + a[Q[0] - 1][Q[1] - 1];
        }
    }

    return sum;
}

int main()
{

    int a[100][100] = {0};
    int Q[100][4] = {0};
    int m, n, q_size, temp, sum;
    int ti, tj, bi, bj;

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

    cout << "Enter number of queries: ";
    cin >> q_size;

    for (int i = 0; i < q_size; i++)
    {
        cout << "Enter parameters of queries(ti tj bi bj): ";
        cin >> Q[i][0] >> Q[i][1] >> Q[i][2] >> Q[i][3];
    }

    for (int i = 0; i < q_size; i++)
    {
        sum = submatrixSum(a, Q[i]);
        cout << "Sum for Query " << i << ": " << sum << endl;
    }

    return 0;
}