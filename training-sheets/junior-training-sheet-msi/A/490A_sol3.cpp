#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, t, a[4][5001], c[4] = {0};
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		c[x]++;
		a[x][c[x]] = i;
	}

	t = min({c[1], c[2], c[3]});

	cout << t << '\n';
	for (int i = 1; i <= t; i++) {
		cout << a[1][i] << ' ' << a[2][i] << ' ' << a[3][i] << '\n';
	}

	return 0;
}