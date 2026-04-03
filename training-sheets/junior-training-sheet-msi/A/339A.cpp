#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int p = 0;
	cin >> s;

	sort(s.begin(), s.end());

	p = s.size() / 2;
	for (int i = 0; i < s.size(); i += 2) {
		swap(s[i], s[p++]);
	}

	cout << s;

	return 0;
}