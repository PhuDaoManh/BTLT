#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int a[30];
    for(int i=0;i<30;i++){
        a[i]=rand()%100+1;
        cout << a[i]<< " ";
    }
    for(int i=0;i<30;i++){
        for(int j=i+1;j<30;j++){
            if(a[j]<a[i])
                swap(a[i],a[j]);
        }
    }cout << endl<< "Khi da sap xep theo thu tu tang dan: \n";
    for(int i=0;i<30;i++)
         cout << a[i]<< " ";

}
