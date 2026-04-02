#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, l;
	string s;
	cin >> t;

	while (t--) {
		cin >> s;
		l = s.size();
		cout << (l > 10 ? s[0] + to_string(l - 2) + s[l - 1] : s) << '\n';
	}

	return 0;
}