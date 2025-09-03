#include <iostream>
using namespace std;

int main ()
{
	int n, m, a[100001] = {0}, num;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num;
		a[num]++;
	}

	for (int i = 1; i <= m; i++) cout << a[i] << '\n';

	return 0;

}

