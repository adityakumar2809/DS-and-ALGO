#include <iostream>
using namespace std;

int main()
{
    char a[][10] = {{'a', 'b', '\0'}, {'d', 'e', 'f', '\0'}};
    char b[][10] = {"hij", "lmn"};

    cout << a[0] << " " << a[1] << endl;
    cout << b[0] << " " << b[1];

    return 0;
}