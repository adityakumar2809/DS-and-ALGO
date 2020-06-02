#include <iostream>
using namespace std;

int main()
{
    int a[100][100] = {0};
    int m, n;

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

    cout << "The wave print of the array is: " << endl;

    // Printing the array
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}