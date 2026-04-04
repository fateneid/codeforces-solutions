#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, n2;
	string s;
	cin >> n >> k;

	n2 = n;
	while (n2 > 0) {
		for (int i = 0; i < k; i++) s += ('a' + i);
		n2 -= k;
	}

	cout << s.substr(0, n);

	return 0;
}