#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> arr = {1,1,2,2,2,3,3,3,3,4,5};
    int a = arr[0];
    int count = 0;
    vector<int> brr;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != arr[i+1]){
            count++;
            brr.push_back(arr[i]);
        } 
        
    }
    for(int i: brr) cout<<i; 
    cout<<count;
}