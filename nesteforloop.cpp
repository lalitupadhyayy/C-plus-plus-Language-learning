#include<iostream>
using namespace std;
 
int main(){
    // WAP print table form 1 to n given number
    /*int n,i=1;
    cout<<"Enter any number:";
    cin>>n;
    while (i<=10)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<i*j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }*/

    // Pattern 1
    /*int i = 1;
    cout<<"Pattern 1"<<endl;
    while (i<=5)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }*/

    //Pattern 2
    /*cout<<"Pattern 2"<<endl;
    int i = 5;
    while (i>=1)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }*/
    
    //Pattern 3
    /*cout<<"Pattern 3"<<endl;
    int i = 1;
    while (i<=5)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }*/

   //Pattern 4
    /*cout<<"Pattern 4"<<endl;
    int i = 5;
    while (i>=1)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i--;
    }*/

    //Pattern 5
    /*cout<<"Pattern 5"<<endl;
    int i = 1;
    while (i<=5)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }*/

    // pattern 6
    /*cout<<"Pattern 6"<<endl;
    int i = 1,k=1;
    while (i<=4)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }*/

   // Pattern 7
   /*int i = 1;
   while (i<=5)
   {
    int j= 4;
    while (j>=i)
    {
        cout<<" ";
        j--;
    }
    int k =1;
    while (k<=i)
    {
        cout<<k;
        k++;
    }
    cout<<endl;
    i++;
   }*/
   
   // Pattern 8
   /*int i = 5;
   while (i>=1)
   {
    int j= 4;
    while (j>=i)
    {
        cout<<" ";
        j--;
    }
    int k =1;
    while (k<=i)
    {
        cout<<k;
        k++;
    }
    cout<<endl;
    i--;
   }*/
    
    // Pattern 9
    int i = 1;
   while (i<=5)
   {
    int j= 4;
    while (j>=i)
    {
        cout<<" ";
        j--;
    }
    int k =1;
    while (k<=i)
    {
        cout<<k;
        k++;
    }
    int l =4;
    while (l>=i)
    {
        cout<<l;
        l--;
    }
    
    cout<<endl;
    i++;
   } 

  
  
    return 0;
}