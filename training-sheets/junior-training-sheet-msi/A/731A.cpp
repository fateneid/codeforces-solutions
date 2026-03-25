#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int r = 0, w = 0;
	char p = 'a';
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		w = abs(s[i] - p);
		r += min(w, 26 - w);
		p = s[i];
	}

	cout << r;

	return 0;
}