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

	for(short i = 0; i < N; i++) {
		if(A[i] <= 10) {
			cout << "A[" << i <<  "] = " << A[i] << '\n';
		}
	}

	return 0;
}