#include <iostream>
using namespace std;

int main()
{
	long long id;
	cin >> id;

	long long y = id/4;
	long long minx =  y*4;
	long long x = (y%2 == 0? id-minx : 3-id+minx);
	cout << y << ' ' << x;

	return 0;
}