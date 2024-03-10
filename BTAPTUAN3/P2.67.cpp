#include<bits/stdc++.h>
using namespace std;
struct Rect{
   float x,y,w,h;
};
struct Ship{
   Rect details;
   string id;
   float dx,dy;
   void move(){
       details.x+=dx;
       details.y+=dy;
   }
};
void display(const Ship& ship){
    cout <<"Ten tau: " <<  ship.id << endl;
    cout <<"Toa do tau: (" << ship.details.x <<"," <<  ship.details.y <<")"<< endl;
}
int main(){
     Ship ship1={{1,2,3,4},"Phu0712",20,10};
     Ship ship2={{2,3,4,5},"Phu2",10,15};
     Ship ship3={{3,4,5,6},"Phu3",12,24};
     int loop=0;
     while(loop<3){
        ship1.move();ship2.move();
         display(ship1);display(ship2);
         loop++;

     }



}
