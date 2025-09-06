#include <iostream>
using namespace std;

int main()
{
	int n, a[100001];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < (n + 1) / 2; i++) {
		cout << a[i] << " ";
		if (i != n - i - 1) {
			cout << a[n - i - 1] << " ";
		}
	}

	return 0;
}