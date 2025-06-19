#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int hash[26] = {0};
    for(int i=0; i<str.size(); i++){
        hash[str[i] - 'a']++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout <<hash[c-'a'] << endl;
    }

    return 0;
    



}