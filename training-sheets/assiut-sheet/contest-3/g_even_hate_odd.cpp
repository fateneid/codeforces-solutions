#include <iostream>
using namespace std;

int main()
{
	int t, n, a[100001], e, o;

	cin >> t;
	while (t--) {
		cin >> n;
		e = 0, o = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) e++;
			else o++;
		}
		cout << ((n % 2 == 0) ? (e >= o ? e : o) - (n / 2) : -1) << '\n';
	}

	return 0;
}