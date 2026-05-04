#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	char l[301][301];
	bool ans = true;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> l[i][j];
			if (l[0][0] == l[0][1]) ans = false;
			if ((i == j || i + j + 1 == n) && l[i][j] != l[0][0]) ans = false;
			else if ((i != j && i + j + 1 != n) && l[i][j] != l[0][1]) ans = false;
			if (!ans) break;
		}
	}

	cout << (ans ? "YES" : "NO");

	return 0;
}