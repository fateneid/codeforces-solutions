#include <iostream>
using namespace std;

int main()
{
    
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    long long Result = 1;
    Result = (Result * A) % 100;
    Result = (Result * B) % 100;
    Result = (Result * C) % 100;
    Result = (Result * D) % 100;
    
    printf("%02d", (int)Result);
    
    return 0; 

}