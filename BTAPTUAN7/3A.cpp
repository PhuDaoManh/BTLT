#include<bits/stdc++.h>
using namespace std;
int count_even(int* a,int n)
{   int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            dem++;
    }
return dem;
}
int main(){
   int a[10]={1,2,3,4,5,3,4,5,6,8};
   cout << count_even(a,5)<<endl;
   cout << count_even(a+5,5);


}
