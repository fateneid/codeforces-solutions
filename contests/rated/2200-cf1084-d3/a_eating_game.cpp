#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n, a[11];
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		int mx = *max_element(a, a + n);
		int cnt = count(a, a + n, mx);
		cout << cnt << '\n';
	}

	return 0;
}