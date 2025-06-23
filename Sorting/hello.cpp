#include <iostream>
using namespace std;
#include <string>
#include <cctype>
#include <vector>



int main(){
    // string str = "v23cab4z2z3";
    // int sum = 0;
    // for(char c: str){
    //     if(isdigit(c)){
    //         sum += c;
    //     }
    // }
    // cout<<sum;

    vector<int> arr = { 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0 };

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[j] > arr[i]){
                swap(arr[i], arr[j]);
                break;
            }
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }
}