#include<iostream>
using namespace std;
 
int main(){
    int size = 20;
    char city[20];
    cout<<"Enter city naeme:\n";
    cin>>city;
    cout<<"city name: "<<city<<endl;

    /*cout<<"Enter city name again:\n";
    cin.getline(city,size);
    cout<<"city name now: "<<city<<endl;*/

    cout<<"Enter another city name:\n";
    cin.getline(city,size);
    cout<<"new city name:"<<city<<endl;
    return 0;
}