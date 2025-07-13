#include<iostream>
using namespace std;
 
 void f(int, int){
    cout<<"f(int, int)"<<endl;
    }
    void f(char,char){
        cout<<"f(char,char)"<<endl;
    }
    template<class T1, class T2>
    void f(T1,T2){
        cout<<"void f(T1,T2)"<<endl;
    }
int main(){
    f(1,1); // Equally good match; choose the nontemplate function
    f('a',1); // Chooses the template function
    f(2,2); //Template arguments explicity specified
    return 0;
}