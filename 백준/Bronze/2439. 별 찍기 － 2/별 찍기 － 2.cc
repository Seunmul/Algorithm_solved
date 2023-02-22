#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    for(int i=T;i>=1;i--){
        for(int j=1;j<=T;j++) j>=i? cout << "*": cout <<" ";
        cout << "\n";
    }
    return 0;
}