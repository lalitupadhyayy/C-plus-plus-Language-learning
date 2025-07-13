#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string>
using namespace std;
 
 class person{
    char name[50];
    int age;
    public:
    person(){
        strcpy(name,"no name");
        age=0;
    }
    person(char* name, int age){
        strcpy(this->name,name);
        this->age = age;
    }
    void whoareyou(){
        cout<<"i am ->"<<name<<"i am ->"<<":"<<age<<"years old"<<endl;
    }
 };
int main(){
    person sanjay("sanjay",30);
    fstream file("person.bin", ios::binary | ios::out| ios::in|ios::trunc);
    if (!file.fail())
    {
        file.write((char*)&sanjay,sizeof(person));
        file.seekg(0);
        //sanjay.whoareyou();
        //person anurag;
        //file.read(char*)&anurag,sizeof(person));
        //anurag.whoareyou();
    }
    else{
        cout<<"error while opening the file\n";
    }
        
    return 0;
}