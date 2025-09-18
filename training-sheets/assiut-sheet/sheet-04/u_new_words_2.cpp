#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	string s;
	cin >> s;

	int f[5] = {0}; // EGYPT
	for (char c : s) {
		switch (toupper(c)) {
		case 'E': f[0]++; break;
		case 'G': f[1]++; break;
		case 'Y': f[2]++; break;
		case 'P': f[3]++; break;
		case 'T': f[4]++; break;
		}
	}

	cout << min({f[0], f[1], f[2], f[3], f[4]});

	return 0;
}