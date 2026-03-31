#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, b, d, a, t = 0, cnt = 0;
	cin >> n >> b >> d;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a <= b) t += a;
		if (t > d) { cnt++; t = 0;}
	}

	cout << cnt;

	return 0;
}