#include<iostream>
using namespace std;
 
int main(){
    int count = 0;
    char c;
    cout<<"input texi\n";
    cin.get(c);
    while(c!='\n'){
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"\n number of characters="<<count<<endl;
    return 0;
}