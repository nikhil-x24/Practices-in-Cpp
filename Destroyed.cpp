#include <iostream>
using namespace std;
class test{
	public:
		test(){
			int n=10;
			cout<<n <<" ";
		}
		~test(){
			cout <<"Object Destroyed";
		}
};
int main(){
	test ob;
}
