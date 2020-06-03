#include <iostream>
#include <algorithm>
using namespace std;

void staircaseSearch(int a[][100], int n, int key)
{
    int i = 0, j = n - 1, x;
    while ((i < n) && (j >= 0))
    {
        x = a[i][j];
        if (x == key)
        {
            cout << "Found at index (" << i << "," << j << ")";
            return;
        }
        else if (key > x)
        {
            i++;
        }
        else
        {
            j--;
        }
        
    }

    cout << "Element not found";
}


int main()
{
    int a[100][100] = {0};
    int n, key;

    cin >> n;

    // Iterating over the array;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> key;

    staircaseSearch(a, n, key);

    return 0;
}