#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	string s;
	cin >> n >> k;

	for (int i = 0; i < k; i++) s += ('a' + i);
	for (int i = k; i < n; i++) s += i % 2 == 0 ? 'a' : 'b';

	cout << s;

	return 0;
}