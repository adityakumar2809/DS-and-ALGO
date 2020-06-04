#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b)
{
    return a.length() < b.length();
}

int main()
{
    int n;
    cin >> n;

    while(getchar()!='\n');
    string s[100];

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    
    sort(s, s+n);

    cout << "After lexicographical comparison" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    sort(s, s+n, compare);

    cout << "After comparison by length" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}