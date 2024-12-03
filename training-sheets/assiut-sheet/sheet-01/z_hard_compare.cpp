#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    
    //A^B = e^Bln(A) and C^D = e^Dln(C) 
    double left = B * log(A);
    double right = D * log(C);
    
    cout << (left > right? "YES" : "NO");
    
    return 0; 

} 