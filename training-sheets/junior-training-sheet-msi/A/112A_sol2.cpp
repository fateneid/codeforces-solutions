#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	char c1, c2;
	int ans =  0;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); i++) {
		c1 = tolower(s1[i]);
		c2 = tolower(s2[i]);
		if (c1 != c2) {
			ans = c1 > c2 ? 1 : -1;
			break;
		}
	}

	cout << ans;

	return 0;
}