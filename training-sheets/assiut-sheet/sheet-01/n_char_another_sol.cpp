#include <iostream>
using namespace std;

char ToggleCaseWithoutLib(char X){
    
    if(X >= 65 && X <= 90){
        return X + 32;
    }
    else if(X >= 97 && X <= 122){
        return X - 32;
    }
    else{
        return '\0';
    }
  
}

int main(){
    
    char X;
    cin >> X;
    
    cout << ToggleCaseWithoutLib(X);
    
}