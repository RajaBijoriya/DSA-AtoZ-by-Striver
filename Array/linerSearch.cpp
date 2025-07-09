#include <iostream>
using namespace std;
#include <vector>
int main(){
     
     vector<int> arr = {1,2,3,4,5,6,7,8};
     int num;
     cout<<"Enter any number";
     cin>>num;
     for(int i=0; i<arr.size(); i++){
        if(arr[i] == num) cout<<i;
        
     }
      
     
}