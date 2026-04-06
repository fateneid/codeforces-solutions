#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x[100001], mi, ma;
	cin >> n;

	for (int i =  0; i < n; i++) cin >> x[i];

	for (int i =  0; i < n; i++) {
		if (i == 0) mi = abs(x[i + 1] - x[i]);
		else if (i == n - 1) mi = abs(x[i - 1] - x[i]);
		else mi = min(abs(x[i + 1] - x[i]), abs(x[i - 1] - x[i]));
		ma = max(abs(x[i] - x[0]), abs(x[i] - x[n - 1]));
		cout << mi << ' ' << ma << '\n';
	}

	return 0;
}