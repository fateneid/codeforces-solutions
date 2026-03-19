#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, y = 1;
	cin >> a >> b;

	while ((a *= 3) <= (b *= 2)) y++;

	cout << y;

	return 0;
}