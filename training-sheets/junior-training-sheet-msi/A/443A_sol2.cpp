#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);
	unordered_set<char> c;

	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) c.insert(s[i]);
	}

	cout << c.size();

	return 0;
}