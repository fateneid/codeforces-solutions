#include <iostream>
using namespace std;

int main()
{
	int n, q, l, r, x;
	long long a[100001] = {0};
	cin >> n >> q;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		a[i] = a[i - 1] + x;
	}

	while (q--) {
		cin >> l >> r;
		cout << a[r] - a[l - 1] << '\n';
	}

	return 0;
}
