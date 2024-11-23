#include <iostream>
#include <cmath>
using namespace std;
 
bool IsMultiple(long long A, long long B){
    return (A % B == 0) || (B % A == 0);
}

int main(){
    
    long long A, B;
    cin >> A >> B;
    
    if (IsMultiple(A, B)){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
 
}
