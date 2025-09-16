#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	vector<string> bs;
	int b = 0, st = 0;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		b += (s[i] == 'L' ? -1 : 1);
		if (b == 0) {
			bs.push_back(s.substr(st, i - st + 1));
			st = i + 1;
		}
	}

	cout << bs.size() << '\n';
	for (int i = 0; i < bs.size(); i++) cout << bs[i] << '\n';

	return 0;
}
