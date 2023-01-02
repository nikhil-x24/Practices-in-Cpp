#include<iostream>
using namespace std;
void tower(int n , char firstA, char endC, char midB){
    if(n == 0)
        return;
    tower(n-1, firstA, midB, endC);
    cout<<"Disk "<<n <<"from "<<firstA << "to " <<endC <<endl;
    tower(n-1, midB, endC, firstA);
}
int main(){
    int n = 4;
    tower(n ,'A', 'C', 'B');
    return 0;
}