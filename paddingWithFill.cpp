#include<iostream>
using namespace std;
 
int main(){
    cout.fill('<');
    cout.precision(3);
    for (int n = 1; n <= 6; n++)
    {
        cout.width(5);
        cout<<n;
        cout.width(10);
        cout<<1.0;
        if (n==3)
            cout.fill('>');
            cout<<"\n";
            cout.width(15);
            cout<<12.34658<<"\n";
    }
    cout<<"\n padding changed \n\n";
        cout.fill('#');
        cout.width(15);
        cout<<12.34658<<"\n";
    
    return 0;
}