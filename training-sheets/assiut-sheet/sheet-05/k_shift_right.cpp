#include <iostream>
using namespace std;

void ShiftRight(int a[], int n, int x) {
	x %= n;
	while (x--) { 
        int last = a[n - 1];
        for (int i = n - 1; i > 0; i--) { 
            a[i] = a[i - 1];
        }
        a[0] = last;
    }
}

int main()
{
	int n, x;
	int a[10001];
	cin >> n >> x;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	ShiftRight(a, n, x);
	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

	return 0;

}