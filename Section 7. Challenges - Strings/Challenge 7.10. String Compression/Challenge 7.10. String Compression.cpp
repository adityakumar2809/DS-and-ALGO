#include<iostream>
#include<string>
using namespace std;

int main() 
{
	string s;
	char ch;
	int count = 0;

	getline(cin, s);
	ch = s[0];
	count ++;
	cout << s[0];
	for(int i = 1; i < s.length(); i++)
	{
		if(s[i] == ch)
		{
			count++;
		}
		else
		{
			cout << count << s[i];
			count = 1;
			ch = s[i];
		}
	}
	cout << count;
}