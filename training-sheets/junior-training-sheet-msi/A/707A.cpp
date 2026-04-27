#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	char p;
	cin >> n >> m;

	while (n--) {
		for (int i = 0; i < m; i++) {
			cin >> p;
			if (p == 'C' || p == 'M' || p == 'Y') {
				cout << "#Color";
				return 0;
			}
		}
	}

	cout << "#Black&White";

	return 0;
}