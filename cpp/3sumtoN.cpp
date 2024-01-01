#include <iostream>
using namespace std;

int main(){
    int sum=0, n;


    cout<<"Enter the limit: ";
    cin>>n;

    for(int i =1; i <= n; i++) {

        sum += i*i;

    }
    cout<<"Sum of squares of first "<<n<<" Natural numbers is: "<<sum<<endl;
    return 0;
}