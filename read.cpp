#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string.h>
using namespace std;
 
int main(){
    const int size = 80;
    char line[size];
    ifstream fin1;
    fin1.open("student.bin");
    for (int i = 0; i <=10; i++)
    {
        if (fin1.eof()!=0)
        {
            cout<<"exit from sameer\n";
            exit(1);
        }
        fin1.getline(line,size);
        cout<<line<<"\n";
        
    }
    
    return 0;
}