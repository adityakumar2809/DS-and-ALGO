#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int x = 5;
	
	ptr = &x;
	
	cout << &x << endl;
	cout << ptr << endl;
	
	return 0;
}
