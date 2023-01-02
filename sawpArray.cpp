#include<iostream>
using namespace std;
void swapAlt(int arr[], int n){
	for(int i=0; i<n; i+=2){
		if(i+1<n){
			swap(arr[i], arr[i+1]);
		}
	}
}
void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<< arr[i] <<" ";
	}
}
int main(){
	int num[6]={1,2,3,4,5,6};
	swapAlt(num,6);
	printArray(num, 6);
}
/*
void swapAlt(int arr[], int n){
	for(int i=0; i<n; i=i+2){
		if(i+1<n){
			swap(arr[i], arr[i+1]);
		}
	}
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<< arr[i] <<"  ";
	}
}

int main(){
	
	int num[6]= {3, 2, 5, 4, 7,8};
	
	swapAlt(num, 6);
	printArr(num, 6);
} */
