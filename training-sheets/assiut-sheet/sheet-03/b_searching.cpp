#include <iostream>
using namespace std;

int SearchInArray(int A[100000], int N, int X) {
	for(int j = 0; j < N; j++) {
		if(A[j] == X) {
			return j;
		}
	}
	return -1;
}

int main()
{
	int N, X;
	int A[100000];
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	cin >> X;
	cout << SearchInArray(A, N, X);

	return 0;
}