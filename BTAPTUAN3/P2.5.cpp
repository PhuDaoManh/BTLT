#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x,y;
};
struct Rect{
     float x,y,w,h;
     bool contains(const Point a) const
     {
        if(a.x>=x&&a.x<=x+w&&a.y<=y&&a.y<=y+h)
            return true;
        return false;
     }

};int main(){
    Point a={5,3};
    const Rect b={7,6,10,5};
    if(b.contains(a)==true)
       cout << "Diem tren thuoc vao hinh chu nhat";
    else cout << "Khong thuoc hinh chu nhat";



}
