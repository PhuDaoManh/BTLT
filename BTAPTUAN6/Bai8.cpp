#include<bits/stdc++.h>
using namespace std;
int rnd(float a){
    if(a-int(a)>=0.5)
     return ceil(a);
return floor(a);

}
int rnd2(float a){
   if(a-int(a)>=0.5){
     return a+1;}
return a;
}
int main(){
   float a;
   cin >> a;
   cout << rnd(a);
   cout <<rnd2(a);


}
