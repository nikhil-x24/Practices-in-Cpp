#include<iostream>
using namespace std;
/*
bool search(int arr[], int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i] == key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[10] = {5, 8, 3,-9, 4, 2, 12, 11, 01, 7};
	cout<< "Enter any No ";
	int key;
	cin>>key;
	
	bool found= search(arr, 10, key);
		if(found){
			cout<<"Key is Present " <<endl;
		}
		else{
			cout<<"Key is Absent " <<endl;
		}
	}
	*/
	bool linearSearch(int arr[], int size, int key){
		for(int i=0; i<size; i++){
			if(arr[i] == key){
				return 1;
			}
		}
		return 0;
	}
	int main(){
		int arr[5] = {3,5,1,7,8};
		cout<<"enter any Key ";
		int key;
		cin>>key;
		
		bool found = linearSearch(arr, 10, key);
			if(found){
				cout<<"key Is Present ";
			}
			else{
				cout<<"Key Is Absent ";
			}
	}

