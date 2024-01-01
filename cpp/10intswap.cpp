#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}

int main() {

    int a, b;

    cout<<"Enter the value for a: ";
    cin>>a;
    cout<<"Enter the value for b: ";
    cin>>b;

    swap(&a, &b);
    
    cout<<"value of a = "<<a<<endl;
    cout<<"value of b = "<<b;


}