#include <iostream>
using namespace std;
#include <vector>
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i=low;
    int j = high;
    while (i<j)
    {
        while (arr[i] <= pivot && i<= high-1){
            /* code */
            i++;
        }
        while (arr[j] > pivot && j<=low+1){
            j--;    
        }
        if(i<j) swap(arr[i], arr[j]);
        
        
        
        /* code */
    }
    swap(arr[low], arr[j]);
    return j;
    
}

void qs(vector<int> &arr, int low, int high){
       if(low<high){
       int pIndex = partition(arr, low, high);
       qs(arr, low, pIndex-1);
       qs(arr, pIndex+1, high);
       }

}

int main(){
    vector<int> arr = {6, 4, 2, 5, 1, 0, 4, 8, 3, 9};
    qs(arr, 0, arr.size()-1) ;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }

}

