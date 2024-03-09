#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=-n+1;j<=n-1;j++){
            if((i+abs(j))<=n-1)
                cout << "*";
            else cout << " ";
        }cout << endl;
    }



}
