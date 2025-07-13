// polymorphism ka part hai ye--one form many task
#include<iostream>
using namespace std;
 // function overloading
#define pi 3.14
 class fn{
    public:
    void area(int); //circle
    void area(int,int); // rectangle
    void area(float,int,int); // triangle
 };
 void fn::area(int a){
    cout<<"Area of circle:"<<pi*a*a;
 }
 void fn::area(int a,int b){
    cout<<"Area of rectangle:"<<a*b;
 }
 void fn::area(float t,int a,int b){
    cout<<"Area of trianble:"<<t*a*b;
 }
int main(){
    int ch;
    int a,b,r;
    fn obj;
    cout<<"\n1.Area of circle\n2.Area of rectangle\n3.Area of triangle\n4.Exit";
    cout<<"\nEnter your Choice:";
    cin>>ch;

    switch (ch)
    {
    case 1:
        cout<<"Enter Radious of the Circle:";
        cin>>r;
        obj.area(r);
        break;
    
    case 2:
        cout<<"Enter Sides of the Rectangle:";
        cin>>a>>b;
        obj.area(a,b);
        break;

    case 3:
        cout<<"Enter Sides of the Triangle:";
        cin>>a>>b;
        obj.area(0.5,a,b);
        break;

    case 4:
        exit(0);
    }
    return 0;
}