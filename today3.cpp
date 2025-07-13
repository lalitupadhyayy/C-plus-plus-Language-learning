#include<iostream>
#include<conio.h>
using namespace std;
 
 class A{
    public:
    int i;
 };
 class B: virtual public A{
    public:
    int j;
 };
 class C: virtual public A{
    public:
    int k;
 };
 class D:virtual public B, public C{
    public: 
    int sum;
 };
int main(){
   D ob;
//    clrscr();
   ob.i =10; // unambigious since only one copy of is inherited.
   ob.j = 20;
   ob.k = 30;
   ob.sum = ob.i + ob.j + ob.k; 
   cout<<"Value of i is:"<<ob.i<<endl;
   cout<<"Value of j is:"<<ob.j<<endl;
   cout<<"Value of k is:"<<ob.k<<endl;
   cout<<"sum is: "<<ob.sum<<endl;
    return 0;
}