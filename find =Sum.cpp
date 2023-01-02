#include <iostream>
using namespace std;
// int main(){
 	
 	
 	
// 	int a=1;
// 	int b=a++;
// 	int c=++a;
// 	cout <<b;
// 	cout <<c;

//int n=3;
//cout <<(25*(++n));

//int a=1;
//int b=2;
//if(a-->0 && ++b>2){
//	cout << "Stage1 ";
//}else{
//	cout<<"Stage2 ";
//}
//cout <<a << " " <<b <<endl;

//int a ,b=1;
//a=10;
//if (++a){
//	cout <<b;
//}
//else cout <<++b;



int main(){
	int n;
	cout <<"Enter the value";
	cin>>n;
    int sum=0;
	
	for (int i=1; i<=n;i++){
		sum+=i;
		
	}
	cout<< sum<<endl;
}
