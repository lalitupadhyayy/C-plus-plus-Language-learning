#include<iostream>
using namespace std;
 
 int palindrome(int num){
    int s = 0;
    while (num>=1)
    {
        int p = num%10;
        s = s*10+p;
        num = num/10;
    }
    return s;
 }
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    int n = palindrome(num);
    if (num==n)
    {
        cout<<"number is palindrome";
    }
    else{
        cout<<"nimber is not palindrome";
    }
    
    return 0;
}