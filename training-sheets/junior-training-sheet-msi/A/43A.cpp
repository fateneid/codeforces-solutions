#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, cnt = 1;
	string x, a, b;
	cin >> n;

	cin >> a;
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (x == a) cnt++;
		else b = x;
	}

	cout << (cnt > (n - cnt) ? a : b);

	return 0;
}