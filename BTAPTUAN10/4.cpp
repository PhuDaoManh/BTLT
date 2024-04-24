#include<bits/stdc++.h>
using namespace std;
const char* pad_left(const char* a, int n)
{
   int m=strlen(a);
   if(m>=n)
     return a;
   char* b=new char[n+1];
   strcpy(b,a);
   int num=n-m;
   for(int i=m-1;i>=0;i--)
   {
     *(b+i+num)=*(b+i);
   }
   for(int i=0;i<num;i++)
      *(b+i)=' ';
return b;
}
int main()
{
   const char* a="Hello";
   int n;
   cin >> n;
   const char* b=pad_left(a,n);
   cout << b;

}

