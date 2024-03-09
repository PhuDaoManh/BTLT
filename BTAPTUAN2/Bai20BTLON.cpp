#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   int sum=0;
   cin >> n;
   if(n<=150)
    sum=12000*100+(n-100)*16000;
   else if(n<=200)
    sum=12000*100+50*16000+(n-150)*20000;
   else sum=12000*100+50*16000+(50)*20000+(n-200)*25000;
cout << sum;
}

