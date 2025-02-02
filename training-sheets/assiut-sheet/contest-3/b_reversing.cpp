#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	short n;
	cin >> n;
	int arr[100];

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 0) {
			for (int j = 0; j < (i / 2); j++) {
				Swap(arr[j], arr[i - j - 1]);
			}
		}
	}

	for(int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}