#include<iostream>
using namespace std;
 int i =1;
int main(){
    while (i<=4)
    {
        int j= 1;
        while (j<=i)
        {
            int k = 1;
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}