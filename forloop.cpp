//WAP print number from 60 to 1 in reverse format
// WAP sum of given any 10 numbers
// WAP print number from 1 to n given number
// WAP sum of all number from 1 to n given number
// WAP sum of all even number from 1 to n given number
// WAP sum of all odd number in reverse format from 70 to 1
// WAP calculate factorial value given of any number
// WAP print table of any given number
// WAP sum of all digits given of any number
// WAP print reverse give of any number
// WAP count all digits given of any number

#include<iostream>
using namespace std;
 
int main(){
    //WAP print number from 60 to 1 in reverse format
    /*for(int i = 60; i >= 1; i--)
    {
        cout<<i<<" ";
    }*/
    
    // WAP sum of given any 10 numbers
    /*int sum=0,num;
    cout<<"Enter 10 numbers:";
    for (int i = 0; i < 10; i++)
    {
        cin>>num;
        sum = sum + num;
    }
    cout<<sum;*/

    // WAP print number from 1 to n given number
    /*int range;
    cout<<"Enter the range:";
    cin>>range;
    for (int i = 1; i <= range; i++)
    {
        cout<<i<<" ";
    }*/

    // WAP sum of all number from 1 to n given number
    /*int range,sum=0;
    cout<<"Enter the range:";
    cin>>range;
    for (int i = 1; i <= range; i++)
    {
        sum = sum + i;
    }
    cout<<"sum is:"<<sum;*/

    // WAP sum of all even number from 1 to n given number
    /*int range,sum=0;
    cout<<"Enter the range:";
    cin>>range;
    for (int i = 1; i <= range; i++)
    {
        if (i%2==0)
        {
            sum = sum + i;
        }
    }
    cout<<"sum is:"<<sum;*/

    // WAP sum of all odd number in reverse format from 70 to 1
    /*int sum=0;
    for (int i = 70; i >= 1; i--)
    {
        if (i%2==1)
        {
            sum = sum + i;
        }
    }
    cout<<"sum is:"<<sum;*/

    // WAP calculate factorial value given of any number
    /*int num,fac = 1;
    cout<<"Enter the number:";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }
    cout<<"factorial is:"<<fac;*/

    // WAP print table of any given number
    /*int num,table;
    cout<<"Enter any number:";
    cin>>num;

    for (int i = 1; i <= 10; i++)
    {
        table = num * i;
        cout<<table<<" ";
    }*/
    
    // WAP sum of all digits given of any number
    /*int num,sum =0;
    cout<<"Enter any number:";
    cin>>num;
    
    for (int i = 0; i < num;)
    {
        
        int p = num%10;
        sum = sum + p;
        num = num/10;
    }
    cout<<"sum is: "<<sum;*/
    
    // WAP print reverse give of any number
    /*int num,range,n =0;
    cout<<"Enter any number:";
    cin>>num;
    
    for (int i = 0; i < num;)
    {
        
        int p = num%10;
        n = n*10+p;
        num = num/10;
    }
    cout<<"reverse number is:"<<n;*/

    // WAP count all digits given of any number
    int num,j=0;
    cout<<"Enter any number:";
    cin>>num;
    
    for ( ;num>0;)
    {
        
        int p = num%10;
        j++;
        num = num/10;
    }
    cout<<j;

    return 0;
}