#include<iostream>
using namespace std;
int main(){
	int n, sum = 0;
	int i = 1;
	cout<<"Enter any Value ";
	cin>> n;
	
	while(i <= n){
		if(i % 2 == 0){
			sum = sum + i;	
		}
		i++;
	}
	cout<< sum;
	
}
