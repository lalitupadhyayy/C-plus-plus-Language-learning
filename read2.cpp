#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>
#include<conio.h>
using namespace std;
 
 class student{
    private:
    int id;
    char name[50];
    int age, cl;
    public:
    void input(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter class:";
        cin>>cl;
    }
    void show(){
        cout<<id<<" "<<name<<" "<<age<<" "<<cl<<" "<<endl;
    }
   
 };
int main(){
   ofstream file("student.bin",ios::app | ios::binary);
   student s;
   char ch;
   do{
    s.input();
    file.write((char*)&s,sizeof(s));
    cout<<"do you want to add record again y/n";
    cin>>ch;
   } 
   while(ch=='y'||ch=='Y');
   file.close();

   ifstream i("student.bin",ios::binary);
   //stuent s;
   while(!i.eof()){
    i.read((char*)&s,sizeof(s));
    s.show();
   }
   getch();
    return 0;
}