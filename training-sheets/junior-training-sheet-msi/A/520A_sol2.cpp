#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	bool ch[26] = {false};
	string s;
	cin >> n >> s;

	if (n < 26) cout << "NO";
	else
	{
		for (int i = 0; i < n; i++) ch[tolower(s[i]) - 'a'] = true;
		cout << (count(ch, ch + 26, true) == 26 ? "YES" : "NO");
	}

	return 0;
}