#include<iostream>
using namespace std;
 
 class cal{ // abstract class
    public:
    int a;
    int b;

    public:
    virtual void op()=0; // pure virtual function
 };
 class cal1:public cal{
    public:
    void op()
    {
        int s;
        a=50;
        b=40;
        s=a+b;
        cout<<"sum of the no="<<s;
    }
 };

 class cal2:public cal{
    public:
    void op()
    {
        int s;
        a=50;
        b=10;
        s=a-b;
        cout<<"sub of the no="<<s;
    }
 };
int main(){
   cal1 oo;
   oo.op(); 
   cal2 on;
   on.op();


//    cal oo; // we cannot create object of abstract class (through error)
   
    return 0;
}