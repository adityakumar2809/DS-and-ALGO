#include<iostream>
#include <string> 
using namespace std;

int main() 
{
	string x, y="";

	cin >> x;

	for(int i = 0; i < x.length(); i++)
	{
		if(int(x[i]) - 48 < 9 - (int(x[i]) - 48))
		{
			y = y + x[i];
		}
		else
		{
			y = y + to_string(9 - (int(x[i]) - 48));
		}
	}

	cout << y;
	
	return 0;
}
