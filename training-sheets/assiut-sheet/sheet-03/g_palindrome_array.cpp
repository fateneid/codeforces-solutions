#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<int> A(N); 
	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	bool IsPalindrome = true;

	for(int i = 0; i < N/2; i++) {
		if(A[i] != A[N - i - 1]) {
			IsPalindrome = false;
			break;
		}
	}

	cout << (IsPalindrome? "YES" : "NO");

	return 0;
}