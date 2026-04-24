#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	string ans;
	cin >> n >> t;

	char c = t + '0';
	if (t == 10) {
		if (n == 1) {cout << -1; return 0;}
		else c = '0';
	}

	for (int i = 0; i < n; i++) ans += c;

	if (t == 10) ans[0] = '1';

	cout << ans;

	return 0;
}