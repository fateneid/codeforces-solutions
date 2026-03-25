#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a1, a2, a3, a4, tc = 0;
	string s;
	cin >> a1 >> a2 >> a3 >> a4 >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') tc += a1;
		else if (s[i] == '2') tc += a2;
		else if (s[i] == '3') tc += a3;
		else tc += a4;
	}

	cout << tc;

	return 0;
}