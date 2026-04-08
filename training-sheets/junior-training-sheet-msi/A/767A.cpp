#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x, last;
	bool has[100001] = {false};
	cin >> n;

	last = n;
	for (int d = 1; d <= n; d++) {
		cin >> x;
		has[x] = true;
		while (has[last]) {
			cout << last << ' ';
			last--;
		}
		cout << '\n';
	}

	return 0;
}