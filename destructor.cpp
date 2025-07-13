#include<iostream>
#include<conio.h>
using namespace std;
 
 class test{
    int *a;
    public:
    test(int size){
        a = new int[size];
        cout<<"enter array of size"<<endl;
    }
    ~test(){
        delete a;
        cout<<"free up the momory of integer array"<<endl;

    }
 };

int main(){
    int s;
    // clrscr();
    cout<<"enter size"<<endl;
    cin>>s;
    test t(s);
    cout<<"press any key to end program";   
    return 0;
}