#include<iostream>
using namespace std;
 struct stu{
     int a;
     int b;
 };
 int sum(int a, int b){
     return a+b;
 }
 int main(){
     stu o1;
     o1.a = 3;
     o1.b = 2;
     int sumq = sum(o1.a, o1.b);
     cout<<"Sum is " << sumq;
 }