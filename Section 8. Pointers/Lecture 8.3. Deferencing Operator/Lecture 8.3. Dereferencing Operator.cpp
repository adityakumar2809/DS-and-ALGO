#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int** pptr;
	int x = 5;
	
	ptr = &x;
	pptr = &ptr;
	
	cout << &x << endl;
	cout << ptr << endl;
	
	cout << *(&x) << endl;
	cout << *(ptr)<< endl;

	cout << *(&ptr)<< endl;
	cout << &(*ptr)<< endl;
	
	cout << &ptr << endl;
	cout << pptr << endl;
		
	return 0;
}
