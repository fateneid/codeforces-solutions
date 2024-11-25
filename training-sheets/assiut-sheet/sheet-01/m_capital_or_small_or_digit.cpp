#include <iostream>
using namespace std;

int main(){
    
    char X;
    cin >> X;
    
    if(char(X) >= 48 && char(X) <= 57){
        cout << "IS DIGIT";
    }
    else{
        
        if(char(X) >= 65 && char(X) <= 90){
            cout << "ALPHA\nIS CAPITAL";
        }
        else if(char(X) >= 97 && char(X) <= 122){
            cout << "ALPHA\nIS SMALL";
        }
        
    }
 
}