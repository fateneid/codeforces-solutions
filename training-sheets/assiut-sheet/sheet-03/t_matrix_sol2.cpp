#include <iostream>
using namespace std;

int main()
{
	int n, a[100][100], d1 = 0, d2 = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
			if(i == j) d1 += a[i][j];
			if(i + j == n - 1) d2 += a[i][j];
		}
	}

	cout << abs(d1 - d2);

	return 0;
}