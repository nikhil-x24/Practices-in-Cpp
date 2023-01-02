//Complement of bit

#include <iostream>
using namespace std;
int main(){
	int m;
	cin>>m;
//	int m=n;
	int mask=0;
	if(m==0){
		return 0;
	}
	while(m!=0){
		mask=(mask<<1) | 1;
		m=m>>1;
	}
	int ans=(~m) & mask;
	return ans;
}
