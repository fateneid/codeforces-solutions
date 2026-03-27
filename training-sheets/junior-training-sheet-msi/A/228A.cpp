#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int s[4], cnt = 0;
	cin >> s[0] >> s[1] >> s[2] >> s[3];

	sort(s, s + 4);
	for (int i = 0; i < 3; i++) {
		if (s[i] == s[i + 1]) cnt++;
	}

	cout << cnt;

	return 0;
}