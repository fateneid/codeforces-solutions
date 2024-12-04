#include <iostream>
using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;
    
    cout << (a % k == 0? (b % k == 0? "Both" : "Memo") : (b % k == 0? "Momo" :  "No One"));

    
    return 0;
}