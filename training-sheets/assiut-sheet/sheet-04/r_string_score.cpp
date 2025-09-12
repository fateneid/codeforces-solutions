#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, score = 0;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; i++) {

		switch (s[i]) {
		case 'V': score += 5; break;
		case 'W': score += 2; break;
		case 'X': i += (i < n - 1); break;
		case 'Y': if (i < n - 1) { s += s[i + 1]; i++; n++; } break;
		case 'Z':
			if (i < n - 1) {
				if (s[i + 1] == 'V') { score /= 5; i++; }
				else if (s[i + 1] == 'W') { score /= 2; i++; }
			}
			break;
		}

	}

	cout << score;

	return 0;
}