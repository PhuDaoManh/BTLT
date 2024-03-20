#include<iostream>
using namespace std;
void print(char a[2][12]){
   for(int i=0;i<2;i++){
    for(int j=0;j<12;j++)
        cout <<static_cast<int>(a[i][j])<< " ";
        cout << endl;
   }
cout << endl;
   }
int main(){
    char daytab[2][12] =
{
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
}; cout << "Cach 1: \n"; print(daytab);
  char daytab2[2][12] ={
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};cout << "Cach 2: \n";  print(daytab2);
 char daytab22[2][12]={
  {31,28,31,30,31,31,30,31,30,31},
  {31,29,30,31,31,30,31,30,31}};
  cout << "Xoa bot phan tu theo cach 1: \n";
  print(daytab22);
  char daytab23[2][12]={31,28,31,30,31,31,30,31,30,31,
  31,29,30,31,31,30,31,30,31};
  cout << "Xoa bot phan tu theo cach 2: \n";
  print(daytab23);
//  char daytab24[][] =
//{
//  {31,28,31,30,31,30,31,31,30,31,30,31},
//  {31,29,31,30,31,30,31,31,30,31,30,31}
//}; cout << "Cach 1: \n"; print(daytab24);
//  char daytab25[][] ={
//  31,28,31,30,31,30,31,31,30,31,30,31,
//  31,29,31,30,31,30,31,31,30,31,30,31};
//  cout << "Cach 2: \n";print(daytab25);






}

