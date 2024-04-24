#include<bits/stdc++.h>
using namespace std;

char* delete_char(const char*a,char c)
{
    int n=strlen(a);
    char* b=new char[n+1];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)!=c)
        {
          *(b+k)=*(a+i);
          k++;}
    }
    *(b+k)='\0';
return b;
}
int main(){
     char* a="HelloWorld";
    char c='o';
    char* b=delete_char(a,c);
    cout << b;
}
