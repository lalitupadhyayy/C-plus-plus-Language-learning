#include<iostream>
#include<string.h>
using namespace std;
 
 class User{
    char *name;
    int age;
    public:
    User(char*nm,int a){
        name = nm;
        age =a;
    }
    void print(){
        cout<<"Name:"<<name<<"Age:"<<age;
    }
 };
 class StudentUser: public User{
    //Derived
    char *schoolEnrolled;
    public:
    StudentUser(char *nam,int y, char *school): User(nam,y){
        //(A)
        schoolEnrolled = school;
    }
    void print(){
        User::print();
        cout<<"School Enrolled: "<<schoolEnrolled<<endl;

    }
 };

int main(){
    StudentUser student("Maura",20,"ece");
    student.print();
       // Name: Maura Age:20  School Enrolled:ece
    return 0;
}