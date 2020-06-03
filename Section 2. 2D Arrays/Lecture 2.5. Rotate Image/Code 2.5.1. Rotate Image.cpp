#include <iostream>
#include <algorithm>
using namespace std;

void rotate(int a[][100], int n)
{
    // reverse each row
    for(int i=0; i<n; i++)
    {
        reverse(a[i], a[i]+n);
    }

    // take transpose
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

void print(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}


int main()
{
    int a[100][100] = {0};
    int n;

    cin >> n;

    // Iterating over the array;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    rotate(a, n);
    print(a, n);

    return 0;
}