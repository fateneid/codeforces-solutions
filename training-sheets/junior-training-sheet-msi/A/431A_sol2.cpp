#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[4], tc = 0;
	string s;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;

	for (int i = 0; i < s.size(); i++) tc += a[s[i] - '1'];

	cout << tc;

	return 0;
}