#include <iostream>
using namespace std;

int main()
{
	int n, a[100001], cnt1 = 0, cnt2 = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt1 += (i % 2 == 0) ? (a[i] < 0) : (a[i] > 0);
		cnt2 += (i % 2 == 0) ? (a[i] > 0) : (a[i] < 0);
	}

	cout << (cnt1 < cnt2 ? cnt1 : cnt2);

	return 0;
}