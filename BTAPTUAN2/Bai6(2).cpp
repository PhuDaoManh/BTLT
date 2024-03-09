
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;

    for(int i=a;i>1;i--){
        if(a%i==0&&b%i==0){
          a=a/i;
          b=b/i;}}s
    cout << a << "/"<< b;

}
