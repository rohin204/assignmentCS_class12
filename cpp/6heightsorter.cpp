#include <iostream>
using namespace std;


int main() {

    int arr[10] ,min ,tmp;

    cout<<"Enter the heights of the students: ";
    for(int i=0;i < 5; i++ ) {
        cin>>arr[i];
    }
    for(int i=0; i<5; i++) {

        min = i;
        for(int j = i+1 ; j<5; j++) {

            if(arr[j] < arr[min]) {
                min = j ;
            }
        } 
        if(arr[i] > arr[min]) {
                tmp = arr[min];
                arr[min] = arr[i];
                arr[i] = tmp;
        }
     }
    for(int i=0;i < 5; i++ ) {
        cout<<"Sorted heights: "<<arr[i]<<" ";
    }
}



                


