#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int b[13] = {0};
    for(int i=0; i<n; i++){
        b[arr[i]] += 1;
    }

    int a;
    cin>>a;
    while(a--){
        int number;
        cin >> number;
        cout<<b[number] <<endl;
    }
    
}