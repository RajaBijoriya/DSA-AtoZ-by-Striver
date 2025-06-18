#include <iostream>
using namespace std;
 int n = 1;
int print(){
    if(n == 20){
        return 0;

    }
    cout<< n<<endl;
    n++;
    print();


}

int Print(int N){
    
    if(N == 0){
        return 0;
    }
    cout<<N<<endl;
    N--;
    Print(N);

}

int main(){
    Print(20);
}