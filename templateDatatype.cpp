#include<iostream>
using namespace std;
 
 template <class T>
 class mypair{
    T a,b;
    public:
    mypair(T first, T second){
        a = first;
        b = second;
    }
    // print(){
    //     cout<<a;
    // }
    T getmax();
 };

 template<class T>
 T mypair<T>::getmax(){
    T retval;
    retval = a>b?a:b;
    return retval;
 }
int main(){
    mypair<int>myobject(100,50);
    // cout<<myobject.print();
    cout<<myobject.getmax();
    return 0;
}