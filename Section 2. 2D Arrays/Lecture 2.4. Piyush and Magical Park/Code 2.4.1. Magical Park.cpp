#include <iostream>
using namespace std;

void magicalPark(char a[][100], int m, int n, int k, int s)
{
    bool success = true;

    for(int i=0; i<m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = a[i][j];
            if(s < k)
            {
                success = false;
                cout<<"No"<<endl;
                return;
            }

            if( ch == '*')
            {
                s+=5;
            }
            else if(ch == '.')
            {
                s-=2;
            }
            else
            {
                break;
            }

            if(j != n-1)
            {
                s--;
            }
        }
        
    }

    if(success)
    {
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
}

int main()
{
    char a[100][100] = {0};
    int m, n, k, s;

    cin >> m >> n >> k >> s;

    // Iterating over the array;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    magicalPark(a, m, n, k, s);

    return 0;
}