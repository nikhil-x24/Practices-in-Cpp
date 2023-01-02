#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
	int start=0;
	int end = size-1;
	//int mid = (start+end)/2;
	int mid = start +(end-start)/2;
	while(start<=end){
		if(arr[mid] == key){
			return mid;
		}
		if(arr[mid] < key){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
		//mid = (start+end)/2;
	    mid = start +(end-start)/2;
	}	
	return -1;
}

int main(){
	int even[6] = {2,4,6,8,12,45};
	int odd[5] = {3,2,6,7,8};
	int index = binarySearch(even, 6, 6);
 	int Inndex = binarySearch(odd, 5, 3);
	cout<<"Index of even Array is " <<index <<"   " <<Inndex <<endl;
	
}
