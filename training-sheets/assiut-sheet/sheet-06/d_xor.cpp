#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll a, b, q;
	cin >> a >> b >> q;

	short r = q % 3;
	cout << (r == 1 ? a : r == 2 ? b : (b ^ a));

	return 0;
}