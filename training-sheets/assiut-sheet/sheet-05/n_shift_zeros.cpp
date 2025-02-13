#include <iostream>
using namespace std;

void ShiftZeros(int A[], int N) {
	int pos = 0;
	for (int i = 0; i < N; i++) {
		if(A[i] != 0) {
			swap(A[i], A[pos]);
			pos++;
		}
	}
}

int main()
{
	int N, A[1001];
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	ShiftZeros(A, N);
	for(int i = 0; i < N; i++) {
		cout << A[i] << ' ';
	}

	return 0;
}