#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>

using namespace std;
 
 const int m=50;
 class pro{
    int itemcode[m];
    int itemprice[m];
    int count;
    public:
    void cnt(){
        count = 0;
    }
    void getinfo();
    void showinfo();
    void psum();
    void rproduct();
 };

 void pro::getinfo(){ // :: -> scope resolution
    cout<<"Enter item code";
    cin>>itemcode[count];
    cout<<"Enter item price:";
    cin>>itemprice[count];
    count++;
    cout<<endl;
 }

 void pro::showinfo(){
    int i;
    for(i=0;i<count;i++){
        cout<<"itemcode="<<itemcode[i]<<endl;
        cout<<"itemprice="<<itemprice[i]<<endl;
    }
    cout<<endl;
 }
 void pro::psum(){
    int s=0,i;
    for ( i = 0; i < count; i++)
    {
        s=s+itemprice[i];
    }
    cout<<"sum of the price="<<s;
    cout<<endl;
 }
 void pro::rproduct(){
    int n,i;
    cout<<"enter code";
    cin>>n;
    for ( i = 0; i < count; i++)
    {
        if (itemcode[i]==n)
        {
            itemcode[i]=0;
            itemprice[i]=0;
        }
        
    }
    cout<<endl;
 }
 
int main(){
 pro oo;
 oo.cnt();
 int v;
 do
 {
    cout<<"1->get item info"<<endl;
    cout<<"2->show item info"<<endl;
    cout<<"3->show psum"<<endl;
    cout<<"4->remove product"<<endl;
    cout<<"5->exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>v;
    cout<<endl;
    switch (v)
    {
    case 1:
        oo.getinfo();
        break;
    case 2:
        oo.showinfo();
        break;
    case 3:
        oo.psum();
        break;
    case 4:
        oo.rproduct();
        break;
    case 5:
        exit;
        break;
    default:
    cout<<"no. is not valid";
        break;
    }

 } while (v!=5);
    
    return 0;
}