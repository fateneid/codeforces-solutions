#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n, m, d;
	cin >> t;

	while (t--) {
		cin >> n >> m >> d;
		float res = n / float((d / m) + 1);
		cout << ceil(res) << "\n";
	}

	return 0;
}
