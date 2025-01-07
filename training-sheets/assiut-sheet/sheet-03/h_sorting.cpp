#include <iostream>
#include <vector>
using namespace std;

void Swap(int& A, int& B) {
	int temp = A;
	A = B;
	B = temp;
}

int main()
{
	int N;
	cin >> N;

	vector<int> A(N);
	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int MinIndex;

	for(int i = 0; i < N - 1; i++) {

		MinIndex = i;
		for(int j = i + 1; j < N; j++) {
			if(A[j] < A[MinIndex]) {
				Swap(A[j], A[MinIndex]);
			}
		}

	}

	for(int i = 0; i < N; i++) {
		cout << A[i] << ' ';
	}

	return 0;
}