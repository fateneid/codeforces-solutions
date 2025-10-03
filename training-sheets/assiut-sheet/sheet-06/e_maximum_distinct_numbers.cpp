#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, x;
	cin >> n;

	x = (-1 + sqrt(1 + 8 * n)) / 2;

	cout << x;

	return 0;
}