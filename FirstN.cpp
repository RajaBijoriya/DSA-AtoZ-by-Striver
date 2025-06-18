#include <iostream>
using namespace std;

int nNumber(int n){
    if(n==20){
        return 0;
    }

    return   n + nNumber(n+1);


}

int main(){
    
    int n = 1;
    cout<<nNumber(n);
}