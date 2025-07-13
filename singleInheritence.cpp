#include<iostream>
using namespace std;
 
 class baseclass{
    public:
    void hello(){
        cout<<"hello how are you, i am baseclass"<<endl;
    }
 };

 class derived:public baseclass{
    public:
    void hi(){
        cout<<"hi i am fine, i am derived class";
    }
 };
int main(){
    baseclass ob;
    ob.hello();
    derived ob2;
    ob2.hello();
    ob2.hi();
    return 0;
}