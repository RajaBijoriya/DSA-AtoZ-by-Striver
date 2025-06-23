#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int rem = 0;
    for(int i=1; i<num-1; i++){
        if(num%i==0) rem = i;
    }
    cout<<rem;
}