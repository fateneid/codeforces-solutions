#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, y, z, ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;
		ans += (x + y + z >= 2);
	}

	cout << ans;

	return 0;
}