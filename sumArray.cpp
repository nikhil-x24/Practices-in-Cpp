#include<iostream>
using namespace std;
/*
int sumFun(int arr[], int n){
	    int sum = 0;
        for(int i=0; i<n; i++){
        	sum=sum+arr[i];
		}
        return sum;
}

int main(){
	int size;
	cin>> size;
	int num[100];
	for(int i=0; i<size; i++){
		cin>> num[i];
	}
	
	cout<<sumFun(num, size);
	return 0;
} */

int getSum(int arr[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		sum=sum + arr[i];
	}
	return sum;
}

int main(){
	int size;
	cin>> size;
	int num[100];
	for(int i=0; i<size; i++){
		cin>> num[i];
		
	}
	cout<<"Total Sum Is "<<getSum(num, size);
}
