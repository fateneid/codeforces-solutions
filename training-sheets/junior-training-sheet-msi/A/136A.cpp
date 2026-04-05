#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, ans[102];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		ans[x] = i;
	}

	for (int i = 1; i <= n; i++) cout << ans[i] << ' ';

	return 0;
}