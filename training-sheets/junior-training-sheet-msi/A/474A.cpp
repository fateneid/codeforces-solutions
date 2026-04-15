#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	char c;
	string s, k = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> c >> s;

	int x = c == 'L' ? 1 : -1 ;

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < 30; j++) {
			if (s[i] == k[j]) cout << k[j  + x];
		}
	}

	return 0;
}