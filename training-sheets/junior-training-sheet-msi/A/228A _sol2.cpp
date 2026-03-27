#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];

	unordered_set<int> s(a, a + 4);

	cout << 4 - s.size();

	return 0;
}