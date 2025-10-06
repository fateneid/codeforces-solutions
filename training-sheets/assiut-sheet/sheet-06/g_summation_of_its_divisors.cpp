#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, s = 0;
	cin >> n;

	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) s += (i != n / i ? i + (n / i) : i);
	}

	cout << s;

	return 0;
}