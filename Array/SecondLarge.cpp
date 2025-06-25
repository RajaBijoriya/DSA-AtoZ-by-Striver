#include <iostream>
using namespace std;
#include <vector>

int main() {
     vector<int> arr = {3,1,3,0,8,7,11,7,4,15,20};
     int larger = 0;
     int large = 0;
     for(int i=0; i<arr.size(); i++){
        if(arr[i] > larger) larger = arr[i];
     }
    int large = 0;
     for(int i=0; i<arr.size(); i++){
        if(arr[i] > large && arr[i] < larger){
            large = arr[i];
        }
     }
    cout<<large;
}