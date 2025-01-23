#include <iostream>
using namespace std;

int main()
{
	int n, k, x;
	cin >> n >> k;

	int count = 0;
	int min = 1000000000;

	for(int i = 1; i <= n; i++) {
		cin >> x;
		if(x < min) {
			min = x;
		}
		count++;
		if(count == k || i == n) {
			cout << min << ' ';
			count = 0;
			min = 1000000000;
		}
	}
	return 0;
}