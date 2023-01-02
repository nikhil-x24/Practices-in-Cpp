#include<iostream>
using namespace std;

void swap1(int a, int b){
    int t = a;
    a = b;
    b = t;
}
void swap2(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int a = 1;
    int b = 2;
    cout<<"Inital Value ";
    cout <<a << " " << b <<" " ;
    swap1(a,b);
    swap2(a,b);
    cout<<"Final Value ";
    cout <<a << " " << b <<" " ;
}