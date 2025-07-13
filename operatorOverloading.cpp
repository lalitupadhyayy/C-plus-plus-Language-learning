#include<iostream>
using namespace std;
 
 class complex{
    int a,b;
    public:
    void getvalue(){
        cout<<"Enter the value of Complex Numbers a,b:";
        cin>>a>>b;
    }
    complex operator+(complex ob){
        complex t;
        t.a=a+ob.a;
        t.b=b+ob.b;
        return (t);
    }
    void display(){
        cout<<a<<"+"<<b<<"\n";
    }
 };
int main(){
   complex obj1,obj2,result;
   obj1.getvalue();
   obj2.getvalue();
   result= obj1+obj2;
   cout<<"input Values:\n";
   obj1.display();
   obj2.display();
   cout<<"Result:";
   result.display();
//    getch(); 
    return 0;
}