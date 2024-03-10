
#include<bits/stdc++.h>
using namespace std;
struct Point{
int x,y;
};
int main(){
   Point phu;
   cout << &phu << endl;
   cout << &phu.x<< endl;
   cout << &phu.y << endl;
//// Nhận xét:
//    +Địa chỉ của phu chính là địa chỉ của phu.x bởi biến x được khởi tạo đầu tiên trong struct
//    +Địa chỉ của phu.y là địa chỉ của phu côngj với kích thước trường dữ liệu của Point


}
