/*#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
 class string{
    protected:
    char *str;
    public:
    void getstring();
    void putstring(string&);
    void display();
    string operator+(string&);
 };


 void strin::getstring(){
    cout<<"Enter string: ";
    cin>>str;
 }

 string string::operator+(string &s){
    string temp;
    if ((strlen(str)+strlen(s.str))>25)
    {
        temp.str=strcat(str,s,str);
    }
    else{
        cout<<endl<<"\nConcatenation is not possible";
    }
    return temp;
    
 }

 void string::display(){
    cout<<str;
 }
int main(){
    string s1,s2,s3;
    s1.getstring();
    s2.getstring();
    s3=s1+s2;
    cout<<endl<<"\nComcatenated string";
    s3.display();
    return 0;
}*/

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class strin
{
protected:
char *str;
public:
void getstring();
void putstring(strin&);
void display();
string operator+(strin&);
};

void strin::getstring()
{
cout<<"Enter string:";
cin>>str;
}

string strin::operator+(strin &s)
{
  strin temp;
if((strlen(str)+strlen(s.str))<25)
{
temp.str=strcat(str,s.str);
}
else
{
cout<<endl<<"\nconcatenation is not possible";
}
return temp;
}
void strin::display()
{
cout<<str;
}
main()
{
strin s1,s2,s3;
s1.getstring();
s2.getstring();
s3=s1+s2;
cout<<endl<<"\nConcatenated string:";
s3.display();
}