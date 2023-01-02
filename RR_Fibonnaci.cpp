#include<iostream>
using namespace std;

int fib(int n){
	//base case
	if( n <= 1){
		return n;
	}
	//recurive Fun
	else{
		return fib(n-1) + fib(n-2);
	}
}
int main(){
	
	int n = 9;
	cout << fib(n);
		
}
