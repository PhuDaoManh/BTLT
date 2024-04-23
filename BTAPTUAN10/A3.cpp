#include<bits/stdc++.h>
using namespace std;

int main(){
//khong hien duoc cerr thu 3
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;//không xóa đúng con trỏ được cấp phát động
cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
