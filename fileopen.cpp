#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
 
int main(){
    ofstream myfile;
    myfile.open("item.txt");
    myfile<<"writing this to a file. \n";
    myfile.close();
    return 0;
}