#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, t;
	vector <int> a[3];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		a[x - 1].push_back(i);
	}

	t = min({a[0].size(), a[1].size(), a[2].size()});

	cout << t << '\n';
	for (int i = 0; i < t; i++) {
		cout << a[0][i] << ' ' << a[1][i] << ' ' << a[2][i] << '\n';
	}

	return 0;
}