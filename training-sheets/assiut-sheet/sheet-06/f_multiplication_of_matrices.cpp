#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a1, a2, b1, b2, a[101][101], b[101][101], e;
	cin >> a1 >> a2;
	for (int i = 0; i < a1; i++) {
		for (int j = 0; j < a2; j++) cin >> a[i][j];
	}

	cin >> b1 >> b2;
	for (int i = 0; i < b1; i++) {
		for (int j = 0; j < b2; j++) cin >> b[i][j];
	}

	for (int r = 0; r < a1; r++) {
		for (int i = 0; i < b2; i++) {
			e = 0;
			for (int j = 0; j < b1; j++) e += (a[r][j] * b[j][i]);
			cout << e << ' ';
		}
		cout << '\n';
	}

	return 0;
}