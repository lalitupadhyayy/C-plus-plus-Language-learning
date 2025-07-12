#include<iostream>
using namespace std;
 
 void primenumber(){
    int num, k=0;
    cout<<"Enter a number to check prime or not prime:";
    cin>>num;
    for (int i = 1; i < num/2; i++)
    {
        if (num%2==0)
        {
            cout<<"number is not prime";
            k++;
            break;
        }
        
    }
    if (k==0)
    {
        cout<<"number is prime";
    }
    
 }

 void primenumber2(){
    cout<<"Prime no between one to ten: ";

    for (int num = 2; num <= 10; num++)
    {
        bool isprime = true;
        for (int i =2; i <num; i++)
        {
            if (num%i==0)
            {
                isprime = false;
                break;
            }
            
        }
        if (isprime)
        {
            cout<<num<<" ";
        }
        
    }
    
 }
int main(){
    // primenumber();
    primenumber2();
    return 0;
}