#include <iostream>
using namespace std;

int main()
{
	short N;
	int A[1000];
	cin >> N;

	for(short i = 0; i < N; i++) {
		cin >> A[i];
	}

	int MinIndex = 0;

	for(short i = 0; i < N; i++) {
		if(A[MinIndex] > A[i]) {
			MinIndex = i;
		}
	}

	cout << A[MinIndex] << ' ' << MinIndex + 1;

	return 0;
}