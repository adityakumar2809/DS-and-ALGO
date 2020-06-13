#include <iostream>
using namespace std;

void search(int a[][100], int m, int n, int key)
{
    int i = 0, j = n - 1;
    while (j >= 0 && i < m)
    {
        if (a[i][j] > key)
        {
            j--;
        }
        else if (a[i][j] < key)
        {
            i++;
        }
        else
        {
            cout << key << " found at index (" << i << " , " << j << ")" << endl;
            return;
        }
    }
    cout << key << " not found in the matrix" << endl;
}

int main()
{

    int a[100][100] = {0};
    int m, n, key;

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

    cout << "Enter key to be searched: ";
    cin >> key;

    search(a, m, n, key);

    return 0;
}