#include <iostream>
using namespace std;
int main(){
   
    int n = 1;
    while(n<100){

        int i;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            cout <<n<< "  ";
        }
        n++;
    }
}