
#include<bits/stdc++.h>
using namespace std;
const char* trimleft(const char* a)
{
   int m=strlen(a);
   int count=0;
   for(int i=0;i<m;i++)
    if(*(a+i)==' ')
       count++;
    char* b=new char[m-count+1];
    strcpy(b,a);
    *(b+m-count)='\0';
return b;
}
int main()
{
   const char* a="HelloWorld  ";
   const char* b=trimleft(a);
   cout << b;
   //cout << "a";

}



