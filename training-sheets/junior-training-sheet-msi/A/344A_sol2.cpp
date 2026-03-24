#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, g = 0;
	string s1 = "", s2 = "";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s2;
		if (s2 != s1) g++;
		s1 = s2;
	}

	cout << g;

	return 0;
}