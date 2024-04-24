
#include<bits/stdc++.h>
using namespace std;
const char* truncate(const char* a, int n)
{
   int m=strlen(a);
   if(m<=n)
     return a;
   char* b=new char[n+1];
   int num=n-m;
   for(int i=0;i<n;i++)
    *(b+i)=*(a+i);
return b;
}
int main()
{
   const char* a="HelloWorld";
   int n;
   cin >> n;
   const char* b=truncate(a,n);
   cout << b;

}

