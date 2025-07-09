#include <iostream>
using namespace std;
#include <vector>
#include <set>

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {1,2,9,5,8,10};
    set<int> s;
    for(int i=0; i<arr1.size(); i++){
        s.insert(arr1[i]);
        s.insert(arr2[i]);
    } 

    for(int i: s) cout<<i<<" ";

}