#include <iostream>
using namespace std;

int main()
{
	short t, n;
	int arr[101];
	cin >> t;

	while(t--)
	{
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for(int i = 0; i < n; i++)
		{
			int m = arr[i];
			cout << m << " ";
			for(int j = i + 1; j < n; j++)
			{
				m = max(m, arr[j]);
				cout << m << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}