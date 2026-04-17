#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, k, x;
	cin >> n >> k;

	// x = ceil((double)n / 2); slower a little bit
	x = n % 2 ? (n / 2) + 1 : n / 2;

	if (k > x) cout << (k - x) * 2;
	else cout << (2 * k) - 1;

	return 0;
}