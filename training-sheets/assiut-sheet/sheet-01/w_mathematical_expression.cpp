#include <iostream>
using namespace std;

int main()
{
    
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    
    if(S == '+' && Q == '='){
        cout << (A+B == C? "Yes" : to_string(A+B));
    }
    else if(S == '-' && Q == '='){
        cout << (A-B == C? "Yes" : to_string(A-B));
    }
    else if(S == '*' && Q == '='){
        cout << (A*B == C? "Yes" : to_string(A*B));
    }
    
    return 0;
}