#include<bits/stdc++.h>
using namespace std;
int rand(int n){
   int b=rand()%n;
return b;


}
int main(){
   int n;
   cin >> n;
   for(int i=0;i<10;i++)
   cout << rand(n)<< " ";

}
