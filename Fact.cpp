#include<iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int a;
    cout<< "Enter a no. ";
    cin>> a;
    cout<< fact(a);
}