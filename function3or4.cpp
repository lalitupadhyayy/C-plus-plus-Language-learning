#include<iostream>
using namespace std;
 int Armstrong(){
    int num,s=0;
    cout<<"Enter any number to check armstrong: ";
    cin>>num;
    int check = num;
    while (num!=0)
    {
        int p = num%10;
        s = s+ (p*p*p);
        num = num/10;
    }
    if (check==s)
        return 1;
    else 
        return 0;
    
 }
int main(){
     int num = Armstrong();
    if (num==1)
        cout<<"number is armstrong";
    else
        cout<<"number is not armstrong";
    
    return 0;
}