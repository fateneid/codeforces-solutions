#include <iostream>
using namespace std;
 
void SimpleCalculator(long long Num1, long long Num2){
    
    cout<< Num1 <<" + "<<Num2<<" = "<<Num1 + Num2<<endl;
    cout<< Num1 <<" * "<<Num2<<" = "<<Num1 * Num2<<endl;
    cout<< Num1 <<" - "<<Num2<<" = "<<Num1 - Num2<<endl;
 
}
 
int main(){
    
    long long Num1, Num2;
    cin>>Num1>>Num2;
    
    SimpleCalculator(Num1,Num2);
    
    
}