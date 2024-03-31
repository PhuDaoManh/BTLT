#include<bits/stdc++.h>
using namespace std;
int toHop(int k, int n) {
    if (k == 0 || k == n) return 1;
    return toHop(k - 1, n - 1) + toHop(k, n - 1);
}

int kiemtra(int k,int n){
   if(k>n||k<0||n>20||n<1)
    return 0;
return 1;
}
void nhapKN(int k[],int n[],int *soPhantu){
 *soPhantu=0;
 while(true){
    int kt1,kt2;
    cin >> kt1 >> kt2;
    if(kt1==-1&&kt2==-1)
        break;
    if(kiemtra(kt1,kt2)){
        k[*soPhantu]=kt1;
        n[*soPhantu]=kt2;
        (*soPhantu)++;}
 }

}
int main(){
  int *soPhantu;
  int k[100];
  int n[100];
  nhapKN(k,n,soPhantu);
  for(int i=0;i<*soPhantu;i++){
    cout << toHop(k[i],n[i]) << endl;
  }
}
