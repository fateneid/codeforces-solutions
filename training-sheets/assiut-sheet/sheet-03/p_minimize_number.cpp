#include <iostream>
#include <algorithm>
using namespace std;

int countDiv(int num) {
	if(num == 0) return 0;
	int count = 0;
	while(num % 2 == 0) {
		num /= 2;
		count++;
	}
	return count;
}

int main()
{
	int n, mi = 30;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mi = min(mi, countDiv(a));
		if(mi == 0) break;
	}

	cout << mi;

	return 0;
}