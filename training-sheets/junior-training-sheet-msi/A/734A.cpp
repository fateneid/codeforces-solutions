#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b;
	string s;
	cin >> n >> s;

	a = count(s.begin(), s.end(), 'A');
	b = n - a;

	if (a > b) cout << "Anton";
	else if (b > a) cout << "Danik";
	else cout << "Friendship";

	return 0;
}