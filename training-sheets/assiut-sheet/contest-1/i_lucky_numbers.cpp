#include <iostream>
using namespace std;

int main()
{
    short N;
    cin >> N;
    
    short D1 = N%10;
    short D2 = N/10;
    cout << ((D2 != 0 && D1%D2 == 0) || (D1 != 0 && D2%D1 == 0)? "YES" : "NO");
 
    return 0;
}