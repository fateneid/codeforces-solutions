#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, cnt = 1;
	string s;
	cin >> n >> s;

	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1]) cnt++;
	}

	cout << cnt;

	return 0;
}