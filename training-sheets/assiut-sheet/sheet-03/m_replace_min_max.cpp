#include <iostream>
using namespace std;

int main()
{

	int n, arr[1001], mi = 0, ma = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] < arr[mi]) mi = i;
		if(arr[i] > arr[ma]) ma = i;
	}

	swap(arr[mi], arr[ma]);

	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}