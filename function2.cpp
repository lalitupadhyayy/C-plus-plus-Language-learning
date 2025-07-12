#include<iostream>
using namespace std;
 
 void perfect(int num){
    int s=0;
    for (int i = 1; i <=num/2; i++)
    {
        if (num%i==0)
        {
            s = s + i;
        }
        
    }

    if (s==num)
    {
        cout<<"number is perfect";
    }
    else{
        cout<<"number is not perfect";
    }
    
 }

 void perfectnum(){
    for (int num = 2; num < 50; num++)
    {
        int s = 0;
        for (int i = 1; i <= num/2; i++)
        {
            // cout<<"je";
            if (num%i==0)
            {
                s = s + i;
            }   
        }
        if (s==num)
        {
            cout<<num<<" ";
        }
        
        
    }
    
 }
int main(){
    /*int num;
    cout<<"Enter any number to check perfect or not: ";
    cin>>num;
    perfect(num);*/

    // perfect number between 1 to 100
    perfectnum();
    return 0;
}