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

	if (t == 10 && n == 1) {cout << -1; return 0;}

	for (int i = 0; i < n; i++) ans += '0';

	ans[0] = t == 10 ? '1' : (t + '0');

	cout << ans;

	return 0;
}