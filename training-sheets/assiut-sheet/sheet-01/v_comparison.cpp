#include <iostream>
using namespace std;

int main()
{
    
    int A, B;
    char S;
    cin >> A >> S >> B;
    
    if(S == '<'){
        cout << (A<B? "Right" : "Wrong");
    }
    else if(S == '>'){
        cout << (A>B? "Right" : "Wrong");
    }
    else if(S == '='){
        cout << (A==B? "Right" : "Wrong");
    }
    
    return 0;
}