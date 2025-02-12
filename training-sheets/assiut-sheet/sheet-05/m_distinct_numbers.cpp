#include <iostream>
using namespace std;

int DistinctNums(int A[], int N) {
	int Distinct = 0;
	for (int i = 0; i < N; i++) {
		bool isUnique = true;
		for (int j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				isUnique = false;
				break;
			}
		}
		if (isUnique) {
			Distinct++;
		}
	}
	return Distinct;
}

int main()
{
	int N, A[1001];
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	cout << DistinctNums(A, N);


	return 0;

}