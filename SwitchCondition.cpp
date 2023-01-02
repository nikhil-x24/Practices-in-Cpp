#include <iostream>
using namespace std;
int main(){
	int amount;
	int n100,n50,n20,n1=0;
	cout <<"Enter Amount ";
	cin>> amount;
	switch(amount>=n100){
		case 1:
			n100 = amount/100;
			amount -= n100 * 100;
			break;
	}
	switch(amount >= n50){
		case 1:
			n50 = amount/ 50;
			amount -= n50 * 50;
			break;
	}
	switch(amount >= n20){
		case 1:
			n20 = amount / 20;
			amount -= n20 * 20;
			break;
	}
	switch (amount >=n1){
		case 1:
			n1 = amount /1;
			amount -= n1 *1;
			break;
	}
	cout <<"100 Notes = " <<n100 <<" Note"<<" "<<"x 100 = " <<n100*100 <<endl;
	cout <<" 50 Notes = " <<n50 <<" Note"<<" " <<"x 50  = " <<n50*50 <<endl;
	cout <<" 20 Notes = " <<n20 <<" Note"<<" " <<"x 20  = " <<n20*20 <<endl;
	cout <<"  1 Notes = " <<n1 <<" Note"<<" " <<"x 1 = " <<n1*1 <<endl;
	

}
