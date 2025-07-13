#include<iostream>
using namespace std;
 class st{
    public:
    int i;
    void getdata(){
        cout<<"hi"<<endl;
    }
 };
 class st1:public st{
    public: void show(){
        i=10;
        cout<<"i="<<i<<endl;
    }
 };
int main(){
   st1 oo;
   oo.show();
   oo.getdata(); 
    return 0;
}