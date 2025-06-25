#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> arr = {1,2,3,4,5};
    int N;
    cin>>N;
    while(N){
        int temp = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[arr.size() - 1] = temp;
        N--;
    }

    for(int i: arr) cout<<i;


}