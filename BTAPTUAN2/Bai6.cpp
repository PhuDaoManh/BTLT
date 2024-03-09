#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
            int k=i+1;
        for(int j=0;j<n;j++)
        {   if(k>10)
               k=1;
            cout << k<< " ";
            k++;

        }
        
           cout << endl;
    }


}
