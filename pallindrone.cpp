#include <iostream>
using namespace std;


bool isPali(string &a, int start){

    if(start >= a.size()/2){
        return true;
    }
    if(a[start] != a[a.size()-start-1]){
        return false;
    }
    return isPali(a, start+1);
}

int main(){
    string a = "madam";
    cout<<isPali(a, 0);

}