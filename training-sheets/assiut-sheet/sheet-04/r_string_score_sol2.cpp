#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, score = 0;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; i++) {

		if (s[i] == 'V') score += 5;
		else if (s[i] == 'W') score += 2;
		else if (s[i] == 'X' && i < n - 1) i++;
		else if (s[i] == 'Y' && i < n - 1) { s += s[i + 1]; i++; n++; }
		else if (s[i] == 'Z' && i < n - 1) {
			if (s[i + 1] == 'V') { score /= 5; i++; }
			else if (s[i + 1] == 'W') { score /= 2; i++; }
		}

	}

	cout << score;

	return 0;
}