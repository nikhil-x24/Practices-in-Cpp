#include<iostream>
using namespace std;
int getSum(int* arr, int n){
	 if(n == 0){
	 	return 0;
	 }
	 if(n == 1){
	 	return 1;
	 }
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

