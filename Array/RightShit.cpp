#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main(){

    vector<int> arr = {1,2,3,4,5};
    int n = 2;
    n = n%arr.size();
    
    reverse(arr.begin(), arr.begin()+n);
    reverse(arr.begin()+n, arr.end());
    reverse(arr.begin(),  arr.end());

    for(int i: arr) cout<<i;
}