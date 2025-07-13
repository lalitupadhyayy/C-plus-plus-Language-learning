#include<iostream>
using namespace std;
 
 class first{
    public:
    int a,b,op;
    public:
    first(){
        a=50;
        b=50;
    }
    void add(){
        op=a+b;
        cout<<"add="<<op;
    }
 };

 class second:public first{
    public:
    int c,d,op1;

    public:
    second(){
        c=50;
        d=50;
    }
    void add1(){
        op1=a+b+c+d;
        cout<<"add1="<<op1;
    }
 };

 class third:public second{
    public:
    int e,f,op2;
    public:
    third(){
        e=50;
        f=50;
    }
    void add2(){
        op2=a+b+e+f;
        cout<<"add2="<<op2;
    }
 };

//  class fourth:public first,third{
//     public:
//     int o,g,op2;
//     public:
//     fourth(){
//         o=50;
//         g=50;
//     }
//     void add5(){
//         op2=a+b+o+g+e+f;

//     }
//  };
int main(){
    third oo;
    oo.add2();
    return 0;
}