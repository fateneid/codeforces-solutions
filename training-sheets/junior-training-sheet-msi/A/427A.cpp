#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, r = 0, ut = 0, e;
	cin >> n;

	while (n--) {
		cin >> e;
		if (e == -1 && r > 0) r--;
		else if (e == -1 && r <= 0) ut++;
		else r += e;
	}

	cout << ut;

	return 0;
}
