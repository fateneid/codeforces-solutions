#include <iostream>
using namespace std;
 
long long Calculator(long long A, long long B, char S){
    
    switch(S){
        case '+':
        return A + B;
        break;
        case '-':
        return A - B;
        break;
        case '*':
        return A * B;
        break;
        case '/':
        return A / B;
        break;
    }
    
}
 
int main()
{
    long long A, B;
    char S;
    
    cin >> A >> S >> B;
    cout << Calculator(A, B, S);
 
    return 0;
}
