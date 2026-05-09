#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, d;
	cin >> n;

	if (n == 0) {cout << 1; return 0;}

	m = n % 4;
	if (m == 1) d = 8;
	else if (m == 2) d = 4;
	else if (m == 3) d = 2;
	else d = 6;

	cout << d;

	return 0;
}