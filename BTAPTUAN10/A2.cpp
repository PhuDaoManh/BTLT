#include<bits/stdc++.h>
using namespace std;
int main(){
 int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;
*p2 = 100;//day la dong gay loi ta khong nen truy cap vao con tro da bi xoa vi p2 chi den p ma ta da xoa p
 cout << *p2;
 delete p2;

}
