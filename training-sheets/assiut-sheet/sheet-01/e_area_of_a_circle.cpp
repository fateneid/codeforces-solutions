#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;
 
double ReadRadius(){
    double R;
    cin >> R;
    return R;
}
 
double AreaOfCircle(double R, const double PI){
    
    return PI*pow(R,2);
    
}
 
int main()
{
    const double PI = 3.141592653;
    double R = ReadRadius();
 
     cout << fixed << setprecision(9) << AreaOfCircle(R, PI);
 
}
