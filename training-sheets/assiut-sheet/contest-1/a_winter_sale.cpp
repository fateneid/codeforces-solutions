#include <iostream>
using namespace std;

int main()
{
    float X, P;
    cin >> X >> P;
    
    printf("%.2f", P/(1-(X/100)));
    
    return 0;
}