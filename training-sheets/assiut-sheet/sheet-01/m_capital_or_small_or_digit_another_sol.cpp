#include <iostream>
#include <cctype>
using namespace std;

int main(){
    
    char X;
    cin >> X;
    
    if(isdigit(X)){
        cout << "IS DIGIT";
    }
    else{
        
        if(isupper(X)){
            cout << "ALPHA\nIS CAPITAL";
        }
        else if(islower(X)){
            cout << "ALPHA\nIS SMALL";
        }
        
    }
    
}