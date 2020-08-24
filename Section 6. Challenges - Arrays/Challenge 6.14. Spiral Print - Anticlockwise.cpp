			{
				cout << arr[row_end][i] << ", ";
			}
			row_end--;
		}
		else if(loop%4 == 2)
		{
			for(int i = row_end; i >= row_start; i--)
			{
				cout << arr[i][col_end] << ", ";
			}
			col_end--;
		}
		else if(loop%4 == 3)
		{
			for(int i = col_end; i >= col_start; i--)
			{
				cout << arr[row_start][i] << ", ";
			}
			row_start++;
		}
		loop++;
	} 
	cout << "END";
}

int main() {
	int m,n, arr[10][10] = {0};

	cin >> m >> n;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> arr[i][j];
		}