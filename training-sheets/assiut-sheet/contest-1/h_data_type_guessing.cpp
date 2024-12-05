#include <iostream>
using namespace std;

int main()
{
    long double n, a, k;
    cin >> n >> k >> a;
    
    long double Result = (n*k)/a;
    
    cout << (Result - (long long)Result != 0? "double" : (Result>2147483647? "long long" : "int"));
    
	return 0;
}