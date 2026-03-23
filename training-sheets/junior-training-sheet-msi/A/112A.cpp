#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
		if (s1[i] != s2[i]) {
			cout << (s1[i] > s2[i] ? 1 : -1) ;
			return 0;
		}
	}

	cout << 0;

	return 0;
}