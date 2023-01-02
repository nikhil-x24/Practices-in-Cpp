#include <iostream>
#include <math.h>
using namespace std;
int main(){
	                    // Decimal to Binary
	int n;
	cout << "Enter Any Decimal no. ";
	cin>> n;
	int ans,i=0;
	while(n!=0){
		int bit=n&1;
		ans=(bit * pow(10,i)) +ans;
		n=n>>1;
		i++;
	}
	cout <<ans <<endl;
	                     // Binary to Deciaml
	int n2;
	cout <<"Enter Any Binary No. ";
	cin>> n2;
	int i2,ans2=0;
	while(n2!=0){
		int digit= n2%10;
		if(digit == 1){
			ans2= ans2+pow(2,i2);
		}
		n2=n2/10;
		i2++;
	}
	cout <<ans2 <<endl;
}  
