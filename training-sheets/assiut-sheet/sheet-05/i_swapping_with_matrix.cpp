#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void SwapRows(int arr[500][500], int N, int X, int Y) {

	for(int i = 0; i < N; i++) {
		Swap(arr[X - 1][i], arr[Y - 1][i]);
	}

}

void SwapCols(int arr[500][500], int N, int X, int Y) {

	for(int i = 0; i < N; i++) {
		Swap(arr[i][X - 1], arr[i][Y - 1]);
	}

}

int main()
{
	int N, X, Y, arr[500][500];
	cin >> N >> X >> Y;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	SwapRows(arr, N, X, Y);
	SwapCols(arr, N, X, Y);
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;

}