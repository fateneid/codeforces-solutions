#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X;
    cin >> X;
    
    int d = log10(X) + 1;
    int FirstDigit = X / (int)pow(10, d - 1);
    
    cout << (FirstDigit % 2 == 0 ? "EVEN" : "ODD");


    return 0;
}