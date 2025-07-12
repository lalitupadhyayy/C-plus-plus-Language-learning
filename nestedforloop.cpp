//WAP print table from 1 to 10
// WAP print table from 1 to n given number
// WAP print this pattern
#include<iostream>
using namespace std;
 
int main(){
    /*for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }*/

   cout<<"PATTERN 1"<<endl;
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 0; j < 5-i ; j++)
    {
        cout<<" ";
    }
    for (int k = 0; k < i; k++)
    {
        cout<<"*";
    }
    cout<<endl;
   }

   cout<<"PATTERN 2"<<endl;
   for (int i = 1; i <= 5; i++)
   {
    for (int j = 0; j < i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   
    cout<<"PATTERN 3"<<endl;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<"PATTERN 4"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <5-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<"PATTERN 5"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    cout<<"PATTERN 6"<<endl;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"PATTERN 7"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    
    cout<<"PATTERN 8"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= 5-i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }

    cout<<"PATTERN 9"<<endl;
    for (int i = 1; i <= 5; i++)
   {
    for (int j = 0; j < 5-i ; j++)
    {
        cout<<" ";
    }
    for (int k = 0; k < i; k++)
    {
        cout<<"*";
    }
    for (int l = 0; l < i-1; l++)
    {
        cout<<"*";
    }
    
    cout<<endl;
   }
    
     cout<<"PATTERN 9"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <5-i; k++)
        {
            cout<<"*";
        }
        for (int l = 5-i; l > 1; l--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }


    cout<<"PATTERN 10"<<endl;
   for (int i = 1; i <= 5; i++)
   {
    for (int a = 0; a < i; a++)
    {
        cout<<"*";
    }
    for (int b = 0; b < 5-i; b++)
    {
        cout<<" ";
    }
    
    for (int j = 0; j < 5-i ; j++)
    {
        cout<<" ";
    }
    for (int k = 0; k < i; k++)
    {
        cout<<"*";
    }
    
    cout<<endl;
   }

    return 0;
}