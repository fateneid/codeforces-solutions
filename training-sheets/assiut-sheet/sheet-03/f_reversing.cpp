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

	for(short i = N - 1; i >= 0; i--) {
	    cout << A[i] << ' ';
	}


	return 0;
}