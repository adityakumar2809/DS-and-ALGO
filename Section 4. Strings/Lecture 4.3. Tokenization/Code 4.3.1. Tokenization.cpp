#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char s[100] = " Today is a rainy day";
    char *ptr = strtok(s, " "); // First pass with the string to get first token
    cout << ptr << endl;

    while(ptr != NULL)
    {
        ptr = strtok(NULL, " ");    // To get subsequent tokens, pass NULL instead of the string
        cout << ptr << endl;
    }
    return 0;
}