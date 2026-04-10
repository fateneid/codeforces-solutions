#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string s;
	unordered_set<char> ch;
	cin >> n >> s;

	if (n < 26) cout << "NO";
	else
	{
		for (int i = 0; i < n; i++) ch.insert(tolower(s[i]));
		cout << (ch.size() == 26 ? "YES" : "NO");
	}

	return 0;
}