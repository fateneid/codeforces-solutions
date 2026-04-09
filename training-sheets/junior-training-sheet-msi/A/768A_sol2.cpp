#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a[100001], cnt = 0, mn = 1000000001, mx = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < mn) mn = a[i];
		if (a[i] > mx) mx = a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == mn || a[i] == mx) cnt++;
	}

	cout << n - cnt;

	return 0;
}