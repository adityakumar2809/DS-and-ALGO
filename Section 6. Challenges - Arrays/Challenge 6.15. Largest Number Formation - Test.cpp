#include<iostream>
#include<algorithm>
using namespace std;

bool compareStringsDesc(string X, string Y)
{
	// first append Y at the end of X
    string XY = X.append(Y);

    // then append X at the end of Y
    string YX = Y.append(X);

    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}

int main() {
	string arr[100] = {""};
	int t, n, temp;

	cin >> t;
	for(int i=0; i<t; i++)
	{
		cin >> n;
		for(int j=0; j<n; j++)
		{
			cin >> temp;
			arr[j] = to_string(temp);
		}
		sort(arr, arr+n, compareStringsDesc);
		for(int j=0; j<n; j++)
		{
			cout << arr[j];
		}
		cout << endl;
	}
	return 0;
}
