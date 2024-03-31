#include<bits/stdc++.h>
using namespace std;
vector<int> rand(int n){
   vector<int>b;
    for(int i=0;i<n;i++){
        b.push_back(rand()%49+1);
    }
return b;
}




int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    a=rand(n);
    for(int i=0;i<n-2;i++){
     for(int j=i+1;j<n-1;j++)
        { for(int k=j+1;k<n;k++)
            { if((a[i]+a[j]+a[k])==25)
                cout << a[i]<<" "<< a[j]<<" "<< a[k]<<endl;
            }
        }

   }


}
