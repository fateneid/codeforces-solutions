#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, h[30], a[30], cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> h[i] >> a[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (h[i] == a[j] && i != j) cnt++;
		}
	}

	cout << cnt;

	return 0;
}