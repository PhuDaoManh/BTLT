#include<bits/stdc++.h>
using namespace std;
int bintodec(vector<int> a){
     int k=0;
     int sum=0;
     for(int i=a.size()-1;i>=0;i--){
        sum+=a[i]*pow(2,k);
        k++;
     }
return sum;
}
vector<int> dectobin(int n){
    vector<int> a;
   while(n){
     int b=n%2;
     a.push_back(b);
     n/=2;
   }
   reverse(a.begin(),a.end());

return a;
}
int main(){
  int n;
  cin >> n;
  vector<int> a;
  a=dectobin(n);
  for(int i:a)
    cout << i <<" ";
 cout << endl;
 cout << bintodec(a);

}

