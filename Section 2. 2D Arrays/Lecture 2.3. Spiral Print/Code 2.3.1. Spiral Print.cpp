#include <iostream>
using namespace std;

void spiralPrint(int a[][100], int m, int n)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;
    
    cout << "The spiral print of the array is: " << endl;

    // Printing the array
    while((startRow <= endRow) && (startCol <= endCol))
    {
        for(int i = startCol; i <= endCol; i++)
        {
            cout << a[startRow][i] << " ";
        }
        startRow++;

        for(int i = startRow; i <= endRow; i++)
        {
            cout << a[i][endCol] << " ";
        }
        endCol--;

        for(int i = endCol; i >= startCol; i--)
        {
            cout << a[endRow][i] << " ";
        }
        endRow--;

        for(int i = endRow; i >= startRow; i--)
        {
            cout << a[i][startCol] << " ";
        }
        startCol++;
    }

}

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

    spiralPrint(a, m, n);

    return 0;
}