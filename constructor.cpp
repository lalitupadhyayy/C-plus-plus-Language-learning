#include<iostream>
#include<conio.h>
using namespace std;
 
 class st{
    public:
    int a;
    int b;

    public:
    st(){
        a=100;
        b=200;
    }

    public:
    st(int c, int d){
        a=c;
        b=d;
    }
    public:
    st(st &x){
        a=x.a;
        b=x.b;
    }
 };

int main(){
 st ob1,ob2(500,400),obj;
//  clrscr();   
 cout<<ob1.a<<endl;
 cout<<ob1.b<<endl;
 cout<<ob2.a<<endl;
 cout<<obj.a<<endl;
    return 0;
}