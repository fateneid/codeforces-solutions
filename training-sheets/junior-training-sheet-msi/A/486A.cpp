#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, ans;
	cin >> n;

	if (n % 2 == 0) ans = n / 2;
	else ans = (n / 2) - n;

	cout << ans;

	return 0;
}