#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    bool Result = (a + b - c == d || a + b * c == d || a - b + c == d ||
                   a - b * c == d ||a * b + c == d || a * b - c == d);
    
    cout << (Result? "YES" : "NO");
    
    
    return 0;
}