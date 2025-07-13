 // Teplate_name_resolution10.cpp
 //compiler with:/Ehsc
#include<iostream>
using namespace std;

 void f(int,int){
    cout<<"void f(int,int)"<<endl;
 }
 template<class T1, class T2>
 void f(T1,T2){
    cout<<"void f(T1,T2)"<<endl;
 }
int main(){
    long l =0;
    int i = 0;
    // Call the template function f(long,int) because f(int, int)
    // would require a conversion from long to int.
    f(l,i);
    return 0;
}