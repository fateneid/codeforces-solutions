#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int N;
	long long sum = 0;
	cin >> N;

	vector<int> A(N);

	for(int i = 0; i < N; i++) {
		cin >> A[i];
		sum += A[i];

	}

	cout << abs(sum);

	return 0;
}