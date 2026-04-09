#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a[100001], cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (a[i] == a[0] || a[i] == a[n - 1]) cnt++;
	}

	cout << n - cnt;

	return 0;
}