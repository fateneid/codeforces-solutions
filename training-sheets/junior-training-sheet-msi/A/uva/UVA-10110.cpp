#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, sq;

	while (cin >> n && n != 0)
	{
		sq = sqrt(n);
		cout << (sq * sq == n ? "yes\n" : "no\n");
	}

	return 0;
}