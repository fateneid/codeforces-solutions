#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, s2;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
			i += 2;
			if (s2.size() != 0 && s2[s2.size() - 1] != ' ') s2 += ' ';
		}
		else s2 += s[i];
	}
	cout << s2;

	return 0;
}