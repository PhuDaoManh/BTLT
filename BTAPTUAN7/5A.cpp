#include<iostream>
char* weird_string() {
   char c[] = “123345”;
   return c;
}

using namespace std;
int main()
{

    cout << weird_string();
}

