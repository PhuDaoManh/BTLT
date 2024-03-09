#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x,y;
    void passToGreed(Point &point)
    {
        point.x=5;
        point.y=4;
    }
    void passtorefer(Point point)
    {
        point.x=5;
        point.y=4;
    }

}; void print(Point p)
    {
       cout <<"("<< p.x <<","<< p.y << ")";
    }
    Point mid_point(const Point a,const Point b)
    {
             Point c;
             c.x=(a.x+b.x)/2;
             c.y=(a.y+b.y)/2;
       return c;
    }
int main(){
    Point phu;

    phu.x=10,phu.y=12;

    cout << "Gia tri ban dau: " ;
    print(phu);cout << endl;

    phu.passToGreed(phu);
    cout <<  "Khi truyen tham chieu: ";
    print(phu);
    cout << endl;

    phu.x=10,phu.y=12;
    phu.passtorefer(phu);
    cout << "Khi truyen tham tri: ";
    print(phu);
    cout << endl;

    Point a,b;
    a.x=3,b.x=5;
    a.y=2,b.y=6;
    cout << "Toa do trung diem cua duong thang noi 2 diem la: ";
    print(mid_point(a,b));



}
