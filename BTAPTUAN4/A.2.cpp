#include<iostream>
using namespace std;

void printchar(char a[]){
   cout << "In theo kieu ki tu: ";
   for(int i=0;a[i]!='\0';i++)
        cout << a[i] << " ";
cout << endl;
}
void printstring(char a[]){
    cout << "In theo kieu xau ki tu: " << a;
cout << endl;
}
int main(){
//a
     char a[5];
     cout << "Khai bao khong khoi tao:"<< endl;
     printchar(a);
     printstring(a);
     cout << endl;
//b
    char b[5]={"abcd"};
    cout << "Khai bao khoi tao voi n lon hon 4:"<< endl;
     printchar(b);
     printstring(b);
     cout << endl;
//     char c[3]={"abcd"};
//     cout << "Khai bao khoi tao voi n lon hon 4:" <<endl;
//     printchar(b);
//     printstring(b);
//     cout << endl;
//c
     char c[]={"abcd"};
     int n=sizeof(c);
     cout << "Kich thuoc cua mang:" << n<<endl;
      printchar(c);
     printstring(c);



}
