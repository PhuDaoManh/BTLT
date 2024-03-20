#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,n;
   cin >> m >> n;
   int a[m][n];
   int d=1;
   int left=0,right=n,bottom=m,top=0;
   while(d<=m*n){
     for(int i=top;i<right;i++)
    {    a[top][i]=d;
         d++;
    }top++;
     for(int i=top;i<bottom;i++)
     {   a[i][right-1]=d;
         d++;

     }right--;
     for(int i=right-1;i>=left;i--)
{     a[bottom-1][i]=d;
       d++;
}   bottom--;
    for(int i=bottom-1;i>=top;i--)
     {

        a[i][left]=d;
          d++;}
      left++;


   }  for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
            cout << a[i][j] << " ";

           }cout << endl;
   }
}
