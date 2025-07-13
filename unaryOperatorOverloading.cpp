#include<iostream>
using namespace std;

class load{
    int x;
    int y;
    int z;
    public:
    load(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    public:void display(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
    }
    void operator-(){
        x = -x;
        y = -y;
        z = -z;
    }
};
 
int main(){
  load oo(4,-6,8);

  oo.display();
  -oo;
  oo.display();  
    return 0;
}