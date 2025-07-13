#include<iostream>
using namespace std;
 
 class student
 {
    void hi(){
        cout<<"hi";
    }
    void hello(){
        cout<<"hello";
    }
    public:
    void all(){
        cout<<"i am accessing all member function of the class";
        hi();
        hello();
    }
 };
int main(){
    student ob;
    ob.all();
    return 0;
}