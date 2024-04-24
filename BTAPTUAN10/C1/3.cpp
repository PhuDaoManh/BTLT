#include<bits/stdc++.h>
using namespace std;
const char* pad_right(const char* a, int n)
{
   int m=strlen(a);
   if(m>=n)
     return a;
   char *b=new char[n+1];
   strcpy(b,a);
   for(int i=m;i<n;i++)
     *(b+i)=' ';
*(b+n)='\0';
return b;
}
int main()
{
   const char* a="Hello";
   int n;
   cin >> n;
   const char* b=pad_right(a,n);
   cout << b;
   cout << "1";

}
