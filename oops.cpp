#include<iostream>
using namespace std;
 
 class student{
    public:
    void hello(){
        cout<<"hello students"<<endl;
    }
    void hi(){
        cout<<"hi karan"<<endl;
    }
 };

 class game{
    // public:
    int health=101;
    void sethealth(int h){
        health = h;
    }
 };

int main(){
   student ob;
   ob.hello();
   ob.hi(); 

   game hero;
//    hero.health = 50;
//     hero.sethealth;
//    cout<<"health of hero:"<<hero.health;
    return 0;

}