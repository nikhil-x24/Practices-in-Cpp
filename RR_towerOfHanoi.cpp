#include<iostream>
using namespace std;
void tower(int n, char firstA, char endC ,char midB){
    if(n == 0)
        return;
    tower(n-1, firstA, midB, endC);
    cout<<"Disk " <<" "<<n <<"form " <<firstA <<"to " <<endC <<endl;
    tower(n-1, midB, endC, firstA);
}
int main(){
    int n = 2;
    tower(n, 'A', 'C', 'B');
    return 0;
}