#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a[101], s = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}

	s /= 2;
	sort(a, a + n);
	for (int i = n - 1; i >= 0; i--) {
		s -= a[i];
		if (s < 0) {
			cout << n - i;
			break;
		}
	}

	return 0;
}