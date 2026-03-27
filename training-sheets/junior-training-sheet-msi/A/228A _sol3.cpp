#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c, d, cnt = 0;
	cin >> a >> b >> c >> d;

	if (a == b || a == c || a == d) cnt++;
	if (b == c || b == d) cnt++;
	if (c == d) cnt++;

	cout << cnt;

	return 0;
}