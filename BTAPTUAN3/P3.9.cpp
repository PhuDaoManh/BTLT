
#include<iostream>
using namespace std;
struct Point{
    int x,y;
};
void passToValue(Point p){
     cout << &p << endl;
     cout << &p.x << endl;
     cout << &p.y<< endl;
}
void passToRefer(Point& p){
     cout << &p << endl;
     cout << &p.x << endl;
     cout << &p.y<< endl;
}


int main(){
    Point poi;
    cout <<"Dia chi ban dau:" << endl << &poi << endl << &poi.x << endl << &poi.y << endl;
    cout << "Khi truyen tham chieu: " << endl;
    passToRefer(poi);cout << "Khi truyen tham tri: " << endl;
    passToValue(poi);

}
