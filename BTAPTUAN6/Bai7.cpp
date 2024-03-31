#include<bits/stdc++.h>
using namespace std;
void sh(int m,int n){
   for(int i=0;i<m;i++)
    cout << " ";
   for(int i=0;i<n;i++)
    cout << "*";
}
int main(){
  int n;
  cin >> n;
  int k=n-1;
  for(int i=0;i<n;i++){
    sh(k,2*i+1);
    cout << endl;
    k--;
  }

}
