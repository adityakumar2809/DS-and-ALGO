#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char a[1000], largest[1000];
    int n;
    cin >> n;

    largest[0] = '\0';
    while(getchar()!='\n');
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000, '\n');
        if(strlen(a) > strlen(largest))
        {
            strcpy(largest, a);
        }
    }

    cout << largest << endl;

    return 0;
}