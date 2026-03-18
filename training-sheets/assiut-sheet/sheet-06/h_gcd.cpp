#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
	while (b != 0) {
		ll temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll a, b, g, l;
	cin >> a >> b;

	g = gcd(a, b);
	l = (a * b) / g;

	cout << g << ' ' << l;

	return 0;
}