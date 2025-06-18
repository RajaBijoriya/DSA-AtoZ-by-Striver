#include <iostream>
using namespace std;

// int  Fibbo(int n){
//     if(n == 0){
//        return 0;        
//     }
//     if(n == 1){
//         return 1; 
//     }
//     return  Fibbo(n-1)+Fibbo(n-2);
// }

// void printFibbo(int n){
//     for(int i=0; i<n; i++){
//         cout<<Fibbo(i)<<  " ";
//     }
// }

int printFibbo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return printFibbo(n-1)+printFibbo(n-2);
}

int main(){
    
   cout<< printFibbo(0);
}