#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, a, s, mx;
	cin >> t;

	while (t--) {
		s = 0;
		mx = -67;
		for (int i = 0; i < 7; i++) {
			cin >> a;
			if (a > mx) mx = a;
			s -= a;
		}
		s += (2 * mx);
		cout << s << '\n';
	}

	return 0;
}