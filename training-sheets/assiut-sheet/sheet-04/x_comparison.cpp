#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	string s, st, sm;
	cin >> s;

	st = s; sm = s;
	for (int i = 0; i < s.size() - 1; i++)
	{
		sort(st.begin(), st.begin() + i + 1);
		sort(st.begin() + i + 1, st.end());
		if (st <= sm) sm = st;
		st = s;
	}

	cout << sm;

	return 0;
}