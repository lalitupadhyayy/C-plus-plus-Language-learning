#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
 
int main(){
    ifstream i("item.txt");
    int count = 0;
    char str[80];
    while (!i.eof())
    {
        i>>(str);
        count++;
    }
    cout<<"total char = "<<count;

    getch();
    
    return 0;
}