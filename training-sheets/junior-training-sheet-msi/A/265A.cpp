#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, t;
	int p = 0;
	cin >> s >> t;

	for (int i = 0; i < t.size(); i++) {
		if (s[p] == t[i]) p++;
	}

	cout << p + 1;

	return 0;
}