#include <iostream>
using namespace std;
char toLowerCase(char ch){
	if(ch >= 'a' &&  ch <= 'z'){
		return ch;
	}
	else{
	char temp = ch - 'A' +'a' ;
	return temp;
	}
}

bool checkPalindrome(char a[], int n){
	int s = 0;
	int e = n-1;
	while(s <= e){
		if(toLowerCase( a[s] ) != toLowerCase( a[e] )){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}

int getlength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0' ;i++){
        count++;
    }
    return count;
}

void reverse(char name[], int n){
	int s = 0;
	int e = n-1;
	while(s<e){
		swap(name[s++], name[e--]);
	}
}

int main()
{
    char name[20];
    cout<< "Enter your name ";
    cin >> name;
    cout<<"Your name is " << name <<endl;
    int len = getlength(name);
    cout << "Length is " <<len <<endl;;
    reverse(name, len);
    cout << "Your reverse name is " <<name <<endl;
    cout <<"Palindrome or Not " << checkPalindrome(name, len) <<endl;
	
	cout << "CHARACTER IS " <<toLowerCase('b') <<endl;
	cout << "CHARACTER IS " <<toLowerCase('C') <<endl;

    return 0;
}

