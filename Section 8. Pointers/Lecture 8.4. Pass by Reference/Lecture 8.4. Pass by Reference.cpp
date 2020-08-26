#include <iostream>
using namespace std;

void increament(int* a)
{
	*a = *a + 1;
	cout << "Inside Function: " << *a << endl;
}

int main()
{
	int a = 10;
	increament(&a);
	cout << "Inside Main: " << a << endl;
	
	return 0;
}
