#include<iostream>
using namespace std;

void printSierpin(int n){

    for(int y = n -1; y >= 0; y--){
        for(itn  i = 0; i<y; i++){
            cout << " ";
        }
    }

}

int main(){
    int n = 16;
    printSierpin(n);
    return 0;
}