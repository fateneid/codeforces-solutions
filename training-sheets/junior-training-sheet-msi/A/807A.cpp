#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a[1001][2];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i][0] >> a[i][1];

	for (int i = 0; i < n; i++) {
		if (a[i][0] != a[i][1]) {
			cout << "rated";
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i + 1][0] > a[i][0]) {
			cout << "unrated";
			return 0;
		}
	}

	cout << "maybe";

	return 0;
}