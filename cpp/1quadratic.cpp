#include <iostream>
#include <cmath>
using namespace std;

int main() {

float a, b, c, root1, root2, d; 

cout<<"Enter the three coeficients: ";
cin>>a>>b>>c;

if (!a) {
    cout<<"Value of 'a' should not be zero\n"<<"Aborting...\n";

}
else {
    d = b*b-(4*a*c);}
    if(d>0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
 
        cout<<"Roots are Real and Unequal\n";
        cout<<"Root1 = "<<root1<<" Root2 = "<<root2;
    }
    else if( d==0) { 
        root1 = -b / (2*a);
        cout<<"Roots are Real and Equal\n";
        cout<<"Root1 = "<<root1;

    }
    else{
        cout<<"Roots are complex and imaginary";
    }
    

return 0;




} 