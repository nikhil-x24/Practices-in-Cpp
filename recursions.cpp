#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==1)
        return 1;
    else
        return fact(n-1) * n;
}

int main(){
    int a;
    cout<< "enter a no. ";
    cin>> a;
    cout<< fact(a);
}            

/* 
int v ;
cin>> v;
int fact = 1;
for(int i = 1; i<v; i++)
fact = fact*i;
*/