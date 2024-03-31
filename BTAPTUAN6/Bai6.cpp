#include<bits/stdc++.h>
using namespace std;
int UCLN(int a,int b){
  while(a*b!=0){
    if(a>b)
      a%=b;
  else b%=a;}

return a+b;

}
int main(){
   int a,b;
   cin >> a >> b;
   if(UCLN(a,b)==1)
    cout << "Day la 2 so nguyen to cung nhau" << endl;
   else cout << UCLN(a,b);



}


