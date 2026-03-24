#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a = 0, b = 0, g = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b;
		if (b != a) g++;
		a = b;
	}

	cout << g;

	return 0;
}