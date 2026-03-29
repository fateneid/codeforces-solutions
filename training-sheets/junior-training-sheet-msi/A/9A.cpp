#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int y, w, m, g;
	cin >> y >> w;

	m = max(y, w);
	g = gcd(7 - m, 6);

	cout << (7 - m) / g << "/" << 6 / g;

	return 0;
}