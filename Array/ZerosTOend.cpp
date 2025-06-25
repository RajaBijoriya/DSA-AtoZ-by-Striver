#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
    vector<int> num;
    vector<int> zero;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0) num.push_back(arr[i]);
        else zero.push_back(arr[i]);
    }
    sort(num.begin(), num.end());
    vector<int> neww;
    for(int i=0; i<num.size(); i++){
        neww.push_back(num[i]);
    }
    for(int i=0; i<zero.size(); i++) neww.push_back(zero[i]);
    for(int i: neww) cout<<i;
}
