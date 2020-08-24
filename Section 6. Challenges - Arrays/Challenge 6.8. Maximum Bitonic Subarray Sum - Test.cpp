#include<iostream>
using namespace std;

int getBitonicSubarray(int a[], int n)
{
	int max_length = 1;
	int max_length_current = 1;
	int slope_old = 0;

	for(int i=1; i<n; i++)
	{
		if(a[i] > a[i-1])
		{
			if(slope_old == -1)
			{
				if(max_length_current > max_length)
				{
					max_length = max_length_current;
					max_length_current = 2;
				}
			}
			else
			{
				max_length_current += 1;
			}
			slope_old = 1;
		}
		else if(a[i] == a[i-1])
		{
			max_length_current += 1;
			slope_old = 0;
		}
		else
		{
			max_length_current += 1;
			slope_old = -1;
		}
	}
	if (max_length_current > max_length)
	{
		max_length = max_length_current;
	}

	return max_length;
}

int main() {
	int arr[1000000] = {0}, t, n;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		cin >> n;
		for(int j=0; j<n; j++)
		{
			cin >> arr[j];
		}
		int max_length = getBitonicSubarray(arr, n);
		cout << max_length << endl;
	}

	return 0;
}