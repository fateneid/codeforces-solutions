#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a[102], m, x, y;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		a[x - 1] += (y - 1);
		a[x + 1] += (a[x] - y);
		a[x] = 0;
	}

	for (int i = 1; i <= n; i++) cout << a[i] << '\n';

	return 0;
}