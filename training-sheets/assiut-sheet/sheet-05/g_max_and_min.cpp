#include <iostream>
using namespace std;

int Min(int a[1000], int n) {
	int min = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int Max(int a[1000], int n) {
	int max = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main()
{
	short n;
	cin >> n;
	int a[1000];

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Min(a, n) << ' ' << Max(a, n);

	return 0;
}