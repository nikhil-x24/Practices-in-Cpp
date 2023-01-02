#include<iostream>
using namespace std;

bool binSer(int *arr, int s, int e, int k){
	if(s>e)
		return false;
		
	int mid = s + (e - s)/2;
	
	if(arr[mid] == k)
		return true;
	if(arr[mid] < k)
		return binSer(arr, mid+1, e, k);
	else
		return binSer(arr, s, mid-1, k);
}

int main(){
	int arr[5] = {2,3,5,7,9};
	int size = 5;
	int key = 17;
	cout<< binSer(arr, 0, 5, 17);
}
