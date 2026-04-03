#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, t;
	vector<vector<int>> v(3);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		v[x - 1].push_back(i);
	}

	t = min({v[0].size(), v[1].size(), v[2].size()});

	cout << t << '\n';
	for (int i = 0; i < t; i++) {
		cout << v[0][i] << ' ' << v[1][i] << ' ' << v[2][i] << '\n';
	}

	return 0;
}