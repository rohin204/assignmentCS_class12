#include <iostream>
using namespace std;

long factorial(int n) { 
    long fact=1;
    for(int i=1 ; i<=n ; ++i) {
       fact *= i; 
    }
    return fact;
}


int main(){
    //nCr section
    int n,r;
    long nfact, rfact, comb;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
      
    nfact = factorial(n);
    rfact = factorial(r);
    comb = nfact / (rfact*factorial(n-r));
    
    cout<<"Value of Combination nCr = "<<comb;
    return 0;

}