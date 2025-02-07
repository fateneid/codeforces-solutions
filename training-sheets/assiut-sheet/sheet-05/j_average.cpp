#include <iostream>
#include <iomanip>
using namespace std;

float avg(float a[10001], int n) {
	float sum = 0;
	for(int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum / n;
}


int main()
{
	int n;
	float a[10001];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << fixed << setprecision(6) << avg(a, n);

	return 0;

}