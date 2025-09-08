#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	int n, q, a[100001], x, l, r, m;
	cin >> n >> q;

	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);

	while (q--) {
		cin >> x;
		l = 0, r = n - 1;
		bool found = false;
		while (l <= r) {
			m = (l + r) / 2;
			if (x < a[m]) r = m - 1;
			else if (x > a[m]) l = m + 1;
			else {
				found = true;
				break;
			}
		}
		cout << (found ? "found" : "not found") << '\n';
	}

	return 0;
}

