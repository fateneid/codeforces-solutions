#include <iostream>
using namespace std;

int main()
{
    long double n, a, k;
    cin >> n >> k >> a;
    
    long double Result = (n*k)/a;
    
    cout << (Result>2147483647? "long long" : (Result - (int)Result == 0? "int" : "double"));

	return 0;
}