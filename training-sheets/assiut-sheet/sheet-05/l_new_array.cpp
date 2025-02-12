#include <iostream>
using namespace std;

void NewArray(int A[], int B[], int C[], int N) {
	for(int i = 0; i < N; i++) {
		C[i] = B[i];
		C[i + N] = A[i];
	}
}

int main()
{
	int N, A[1001], B[1001], C[2002];
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for(int i = 0; i < N; i++) {
		cin >> B[i];
	}

	NewArray(A, B, C, N);
	for(int i = 0; i < N*2; i++) {
		cout << C[i] << ' ';
	}

	return 0;

}