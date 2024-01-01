#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i, num;
    cout<<"Enter the number: ";
    cin>>num;

    for(i = 2; i <= num/2; ++i){
        if(num%i == 0){
            cout<<"Not a prime.";
            exit(0);
        }
    }
    cout<<"Prime number.";
    return 0;
}