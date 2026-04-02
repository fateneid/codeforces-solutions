#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, x, d, cnt = 0;
	char s;
	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> s >> d;
		s == '+' ? x += d : (d <= x ? x -= d : cnt++);
	}

	cout << x << " " << cnt << "\n";

	return 0;
}