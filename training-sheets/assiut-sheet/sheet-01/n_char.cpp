#include <iostream>
#include <cctype>
using namespace std;

char ToggleCase(char X){
    return isupper(X)? tolower(X): toupper(X);
}

int main(){
    
    char X;
    cin >> X;
    
    if(isalpha(X)){
        cout << ToggleCase(X);
    }
    
    
}