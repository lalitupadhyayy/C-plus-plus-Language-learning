#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>
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
    int getage(){
        return age;
    }
    int getid(){
        return id;
    }
    void search();
 };
void student::search(){
    int rno;
    cout<<"Enter the no for search";
    cin>>rno;
    ifstream i("student.bin",ios::binary);
    int found = 0;
    student s;

    while (!i.eof())
    {
        i.read((char*)&s,sizeof(s));
        //s.show()
        if (s.getid()==rno)
        {
            s.show();
            found = 1;
            break;
        }
        
    }
    if(found==0)
    {
        cout<<"record not found"<<endl;
        //cout<<s.getid();
    }
    else{
        cout<<"record is found"<<endl;
    }
           
 }
int main(){
   student s;
   s.search();
   /*ofstream file("student.txt",ios::app);
   char ch;
   do{
    s.input();
    file.write((char*)&s,sizeof(s));
    cout<<"do you want to add record again y/n";
    cin>>ch;
   } 
   while(ch=='y'||ch=='Y');
   file.close();
   s.show();
//    getch();*/
    return 0;
}