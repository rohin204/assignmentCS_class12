#include <iostream>
using namespace std;

int main(){
    struct student
    {
        int adm_num;
        char name[20];
        float marks;

    }st;
    
float CE,PE,TE;

cout<<"Enter your admission number: ";
cin>>st.adm_num;
cout<<"Enter your name: ";
cin>>st.name;
cout<<"Enter CE marks: ";
cin>>CE;
cout<<"Enter PE marks: ";
cin>>PE;
cout<<"Enter TE marks: ";
cin>>TE;

st.marks = CE + PE + TE;

cout<<endl<<"Admission number: "<<st.adm_num<<endl;
cout<<"Name: "<<st.name<<endl;

cout<<"Total marks obtained: "<<st.marks;
}