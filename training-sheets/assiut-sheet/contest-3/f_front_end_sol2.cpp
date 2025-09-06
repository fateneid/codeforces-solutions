#include <iostream>
using namespace std;

int main()
{
	int n, a[100001];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++) {
		int index = (i % 2 == 0) ? i / 2 : n - 1 - i / 2;
		cout << a[index] << " ";
	}

	return 0;
}