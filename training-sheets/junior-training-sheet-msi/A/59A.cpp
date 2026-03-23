#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int cnt = 0;
	bool low = true;
	cin >> s;

	for (char& c : s) cnt += isupper(c);
	if (cnt > s.size() / 2) low = false;
	for (char& c : s) c = low ? tolower(c) : toupper(c);

	cout << s;

	return 0;
}