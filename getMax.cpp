#include <iostream>
#include<limits.h>
using namespace std;

int maxGet(int num[] , int n){
	int max= INT_MIN;
	
	for(int i = 0; i<n ; i++){
		if(num[i] > max){
			max = num[i];
		}
	}
	return max;
}

int main(){
	
	int size;
	cin>> size;
	
	int num[100];
	
	for(int i=0 ; i<size ; i++){
		cin>> num[i];
	}
	cout<<"Maximum Number is "<<maxGet(num, size) <<endl;
}