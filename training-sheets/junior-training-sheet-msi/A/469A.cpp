#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, l, x;
	unordered_set <int> lev;
	cin >> n >> l;

	for (int i = 0; i < l; i++) {cin >> x; lev.insert(x);}
	cin >> l;
	for (int i = 0; i < l; i++) {cin >> x; lev.insert(x);}

	if (lev.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";

	return 0;
}