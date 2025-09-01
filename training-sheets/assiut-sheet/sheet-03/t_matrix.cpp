#include <iostream>
using namespace std;

int main()
{
	int n, a[100][100], d1 = 0, d2 = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		d1 += a[i][i];
		d2 += a[i][n - i - 1];
	}

	cout << abs(d1 - d2);

	return 0;
}