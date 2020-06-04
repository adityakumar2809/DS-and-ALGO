#include <iostream>
using namespace std;

int main()
{
    char s1[] = {'a', 'b', 'c', '\0'};
    cout << s1 << endl;

    char s2[] = "hello";
    cout << s2 << endl;

    char s3[10] = "hi";
    cout << s3 << endl;

    return 0;
}