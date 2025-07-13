#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
 
int main(){
    ifstream i("hello.txt");
    int count = 0;
    char str[80];

    while(!i.eof())
    {
        i.getline(str,80);
        count++;
    }
    cout<<"total line "<<count;
    i.close();
    getch();
    return 0;
}