#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, a[1001];
	cin >> n >> k;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());

	long long sum = 0;
	for(int i = 0; i < k; i++) {
		if(a[i] > 0) {
			sum += a[i];
		}
		else {
			break;
		}
	}

	cout << sum;

	return 0;
}