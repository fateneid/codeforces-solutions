#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, ans;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> x;
			if (x == 1) {
				ans = abs(3 - i) + abs(3 - j);
				break;
			}
		}
	}

	cout << ans;

	return 0;
}