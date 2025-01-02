#include <iostream>
using namespace std;

int main()
{
	int N;
	int A[100000];
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	for(int i = 0; i < N; i++){
	    cout << (A[i] > 0? 1 : A[i] == 0? 0 : 2) << ' ';
	}
	
	return 0;
}