#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, s2 = "";
	int c1 = 0, c2 = 0, c3 = 0;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') c1++;
		else if (s[i] == '2') c2++;
		else if (s[i] == '3') c3++;
	}

	while (c1--) s2 += "1+";
	while (c2--) s2 += "2+";
	while (c3--) s2 += "3+";

	cout << s2.substr(0, s2.size() - 1);

	return 0;
}