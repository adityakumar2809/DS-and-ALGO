#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char a[])
{
    int i, j, length;
    length = strlen(a);

    if (length <= 1)
    {
        return;
    }
    else
    {
        j = 0, i = 1;
        while (a[i] != '\0')
        {
            if (a[i] != a[j])
            {
                a[++j] = a[i];
            }
            i++;
        }
    }
    a[++j] = '\0';
}

int main()
{
    char a[1000];
    cin.getline(a, 1000, '\n');

    removeDuplicates(a);

    cout << a << endl;

    return 0;
}