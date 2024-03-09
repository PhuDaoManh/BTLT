#include<iostream>
using namespace std;
int main(){
   int number=0,prenumber=-1;
   while(true){cin >> number;
      if(number==-1)
        break;

      if(number!=prenumber)
        cout << number<< " ";
      prenumber=number;

   }

}
