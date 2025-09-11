#include <bits/stdc++.h>
using namespace std;

int main()
{
	string w;
	bool f = false;

	while (cin >> w) {
		if (f) cout << ' ';
		reverse(w.begin(), w.end());
		cout << w;
		f = true;
	}

	return 0;
}
