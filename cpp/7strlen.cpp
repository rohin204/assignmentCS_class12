#include <iostream>
using namespace std;

int main(){

    char str[10];
    int len=0;
    
    cout<<"Enter your string: ";
    gets(str);

    for(int i=0; str[i] != '\0'; i++) {
        len++;
    }
    cout<<"Lenght the given string is: "<<len;
    return 0;

}


