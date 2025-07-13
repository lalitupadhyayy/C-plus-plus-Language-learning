#include<iostream>
#include<stdio.h>
#include<string.h>
// #include<conio.h>
using namespace std;
 
 class strin{
    protected:
    char str[25];
    public:
    void getstring();
    void display();
    void operator+(strin&);
 };

 void strin::getstring(){
    cout<<"Enter string:";
    gets(str);
 }

 /*void strin::operator+(strin &s){
    strcat(str,s.str);
 }*/

 void strin::display(){
    cout<<str;
 }
int main(){
    strin s1,s2;
    s1.getstring();
    s2.getstring();
    cout<<endl<<"\nafter addition:\n";
    s1+s2;
    s1.display();
    return 0;
}