#include<iostream>
using namespace std;
 
int main(){
    int var =20; // actual variable declaration
    int *ip; // pointer variable

    ip =&var; // store address of avar in pointerr variable
    cout<<"value of var variable:";
    cout<<var<<endl;

    //Print the address stored in ip pointer variable
    cout<<"Address stored in ip variable:";
    cout<<ip<<endl;

    //access the value at the address available in pointer
    cout<<"Value of *ip variable:";
    cout<<*ip<<endl;
    return 0;
}