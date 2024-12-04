#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    
    cout << (a+b > 0 && abs(a-b) <= 1? "YES" : "NO");
    
    return 0;
}