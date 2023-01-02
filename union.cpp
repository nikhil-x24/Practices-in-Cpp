#include<iostream>
using namespace std;
union uin
{
   int x;
   char ch;
   float f;
};

int main(){

    union uin s;
    s.x = 65;
    s.ch = 34;
    s.f = 34.34;
    cout<<s.ch;
    cout<<s.f;
    cout<<s.x;

}