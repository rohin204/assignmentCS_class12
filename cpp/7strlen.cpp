#include <iostream>
using namespace std;

int main(){

    char str[20];
    int len=0;
    
    cout<<"Enter your string: ";
    cin.getline(str,10);

    for(int i=0; str[i] != '\0'; i++) {
        len++;
    }
    cout<<"Lenght the given string is: "<<len;
    return 0;

}


