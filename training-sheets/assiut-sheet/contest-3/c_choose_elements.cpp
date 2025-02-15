#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, a[1001], k;
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	long long sum = 0;
	for(int i = n - 1; i >= n - k; i--) {
		sum += a[i];
	}

	cout << sum;

	return 0;
}