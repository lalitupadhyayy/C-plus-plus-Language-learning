// WAP print number from 3 to 50 
// WAP print reverse number 50 to 1
// WAP sum of all number from 1 to n given number
// WAP print table of seven
// WAP sum of all number from 2 to 20
// WAP sum of all odd number from 70 to 1 in reverse format
// WAP sum of all digits given of any number
// WAP print reverse given of any number
// WAP count all digits given of any number
// WAP print table of any given number
// WAP calculate factorial value given of any number

#include<iostream>
using namespace std;
 
int main(){
    // WAP print number from 3 to 50 
    /*int i = 3;
    while ( i<= 50)
    {
        cout<<i<<" ";
        i++;
    }*/
    
    // WAP print reverse number 50 to 1
    /*int i = 50;
    while (i>=1)
    {
        cout<<i<<" ";
        i--;
    }*/
    
    // WAP sum of all number from 1 to n given number
    /*int n,i=1,sum=0;
    cout<<"Enter any number:";
    cin>>n;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<"sum is:"<<sum;*/
    
    // WAP print table of seven
    /*int i = 1;
    while (i<=10)
    {
        cout<<i*7<<" ";
        i++;
    }*/
    
    // WAP sum of all number from 2 to 20
    /*int i = 2,sum=0;
    while (i<=20)
    {
        sum = sum + i;
        i++;
    }
    cout<<"sum is: "<<sum;*/

    // WAP sum of all odd number from 70 to 1 in reverse format
    /*int i=70,sum=0;
    while (i>=1)
    {
        if (i%2==1)
        {
            sum = sum + i;
        }
        i--;
    }
    cout<<"Sum is: "<<sum;*/

    // WAP sum of all digits given of any number
    /*int n,sum=0;
    cout<<"Enter any number:";
    cin>>n;
    while (n>0)
    {
        int p = n%10;
        sum = sum + p;
        n = n/10;
    }
    cout<<"sum is: "<<sum;*/

    // WAP print reverse given of any number
   /* int n,rev=0;
    cout<<"Enter any number:";
    cin>>n;
    while (n>0)
    {
        int p = n%10;
        rev = rev*10 + p;
        n = n/10;
    }
    cout<<"reverse no is:"<<rev;*/

    // WAP count all digits given of any number
    /*int n,cnt = 0;
    cout<<"Enter any number:";
    cin>>n;
    while (n>0)
    {
        int p = n%10;
        cnt++;
        n = n/10;
    }
    cout<<"total count is: "<<cnt;*/

    // WAP print table of any given number
    /*int n,i=1;
    cout<<"Enter any number:";
    cin>>n;
    while (i<=10)
    {
        cout<<i*n<<" ";
        i++;
    }*/
    
    // WAP calculate factorial value given of any number
    int n,fac = 1;
    cout<<"Enter any number:";
    cin>>n;
    while (n>0)
    {
        fac = n*fac;
        n--;
    }
    cout<<"factorial is: "<<fac;
    return 0;
}