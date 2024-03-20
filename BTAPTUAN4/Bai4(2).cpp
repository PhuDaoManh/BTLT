#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b=0;
    int a[n][n];
    for(int i=0;i<n;i++){
        b++;
        for(int j=0;j<b;j++){
            if(j==0||j==b-1)
                a[i][j]=1;
            else if(i>=2&&j>=1)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            cout << a[i][j] << " ";
        }cout <<endl;

    }}

