#include<bits/stdc++.h>
using namespace std;
bool doiGuong(int n){
    int sum=0;
    int c=n;
     while(n){
       int b=n%10;
        n/=10;
        sum=sum*10+b;
     }
   if(sum==c)
      return true;
   return false;
}
int main(){
    int t;
    int a,b,count=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {   cin >> a >> b;
        count=0;
        for(int j=a;j<=b;j++)
        {
            if(doiGuong(j))
               count++;
        }cout << count << endl;
    }



}
