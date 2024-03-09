
#include<iostream>
using namespace std;
int main(){
int n,max=0;
cin >> n;
int a;
cin >> a;
int min=a;
if(max<a)
    max=a;
for(int i=1;i<n;i++){

    cin >> a;
    if(max<a)
      max=a;
    if(min>a)
        min=a;
    }
   cout << min << " "<< max;
}
