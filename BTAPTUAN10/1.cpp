#include<bits/stdc++.h>
using namespace std;


char* reverse(const char* a)
{   int n=strlen(a);
    int k=n;
    char* result=new char[n+1];
    for(int i=0;i<n;i++)
    {
        *(result+i)=*(a+k-1);
        k--;
    }
result[n]='\0';
return result;
delete[] result;
}

int main()
{
  const char *a="HelloWorld";
  char* b=reverse(a);
  cout << b;
}
