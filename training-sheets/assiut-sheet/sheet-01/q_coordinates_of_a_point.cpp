#include <iostream>
using namespace std;
 
int main()
{
    
    float X, Y;
    cin >> X >> Y;
 
    if(X == 0){
        cout << (Y == 0 ? "Origem" : "Eixo Y");
    }
    else if(Y == 0){
        cout << "Eixo X";
    }
    else{
        cout <<(X > 0? (Y > 0? "Q1" : "Q4") : (Y > 0? "Q2" : "Q3"));
    }
 
    return 0;
}

