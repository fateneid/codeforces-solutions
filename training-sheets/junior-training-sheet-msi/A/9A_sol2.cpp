#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int y, w, m;
	cin >> y >> w;

	m = max(y, w);
	if (m == 6) cout << "1/6";
	if (m == 5) cout << "1/3";
	if (m == 4) cout << "1/2";
	if (m == 3) cout << "2/3";
	if (m == 2) cout << "5/6";
	if (m == 1) cout << "1/1";

	return 0;
}