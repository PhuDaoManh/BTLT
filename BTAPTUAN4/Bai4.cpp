#include<bits/stdc++.h>
using namespace std;
int dem(char** a,int i, int j,int m,int n){
    int count=0;
     for(int c=i-1;c<=i+1;c++){
        for(int d=j-1;d<=j+1;d++)
            if(c>=0&&d>=0&&c<m&&d<n&&a[c][d]=='*')
               count ++;}
return count;
}
int main(){
   int m,n;
   cin >> m >> n;
   char** a=new char*[m];
   for(int i=0;i<m;i++)
    { a[i]=new char[n];
      for(int j=0;j<n;j++)
        cin >> a[i][j];
    }

   for(int i=0;i<m;i++)
      { for(int j=0;j<n;j++)
      {     if(a[i][j]=='.'){
               a[i][j]=dem(a,i,j,m,n)+'0';
               cout << a[i][j] << " ";}
            else cout << a[i][j] << " ";
      }cout << endl;
      }
}
