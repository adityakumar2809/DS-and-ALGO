#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000];
    cin.getline(a, 1000, '\n');

    char a_rev[1000];
    strcpy(a_rev, strrev(a));

    if(strcmpi(a, a_rev) == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}