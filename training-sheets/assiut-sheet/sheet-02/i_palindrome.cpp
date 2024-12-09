#include <iostream>
using namespace std;

int main()
{
	int N, revN = 0, temp;
	cin >> N;

	temp = N;
	while(temp != 0) {
		revN = revN * 10 + (temp % 10);
		temp /= 10;
	}

	cout << revN << '\n';
	cout << (revN == N? "YES":"NO");

	return 0;
}