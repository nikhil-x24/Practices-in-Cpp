#include<iostream>
using namespace std;
	/*
	int a,b;
	cin >> a >> b;
	int ans=1;
	for (int i = 1;i <= b; i++){
		ans= ans *a;
	}
	cout << ans << endl;
	*/
	
	//oddEven
	
	bool isEven(int a){
		if(a&1){
			return 0;
		}
		return 1;
	}
	int main(){
		int num;
		cin>> num;
		if(isEven(num)){
			cout<<"No. even " <<endl;
		}
		else{
			cout <<"No odd ";
		}
	}
	

