#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, h, a, res = 0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > h) res += 2;
		else res++;
	}

	cout << res;

	return 0;
}