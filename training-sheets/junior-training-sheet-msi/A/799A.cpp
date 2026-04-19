#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t, k, d;
	cin >> n >> t >> k >> d;

	// (d + t) / t => (d/t)+ 1
	if (((d / t) + 1) * k >= n) cout << "NO";
	else cout << "YES";

	return 0;
}