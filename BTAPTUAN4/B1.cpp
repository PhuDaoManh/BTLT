#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin >> n;
   vector<bool> b(n+1,false);
   int a;
   for(int i=0;i<n;i++){
        cin >> a;
     if(b[a]){
        cout << "Yes";
        return 0;

     }
     b[a]=true;

   }cout << "No";
}



