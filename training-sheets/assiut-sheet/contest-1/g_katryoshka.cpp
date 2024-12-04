#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    
    long long Result = min(n,min(m,k));
    n -= Result;
    m -= Result;
    k -= Result;
    Result += min(n/2,k);
    cout << Result;
    
    return 0;
}