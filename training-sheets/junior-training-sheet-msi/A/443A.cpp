#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);
	unordered_set<char> c(s.begin(), s.end());

	int cnt = c.size() - 2;
	cout << (cnt >= 3 ? cnt - 2 : cnt);

	return 0;
}