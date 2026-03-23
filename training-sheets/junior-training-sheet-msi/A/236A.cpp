#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	bool ch[26] = {0};
	cin >> s;

	for (char c : s) ch[c - 'a'] = 1;

	cout << (count(ch, ch + 26, 1) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

	return 0;
}