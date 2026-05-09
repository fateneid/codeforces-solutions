#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, d[4] = {6, 8, 4, 2};
	cin >> n;

	if (n == 0) cout << 1;
	else cout << d[n % 4];

	return 0;
}