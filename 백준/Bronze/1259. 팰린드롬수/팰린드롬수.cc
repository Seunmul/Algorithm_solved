#include <bits/stdc++.h>
using namespace std;
int main() {
	string N;
    while (N!="0") {
        cin >> N;
        string buf = N;
        reverse(N.begin(), N.end());
        if (N=="0") break;
        else if(N == buf) cout <<"yes"<<"\n";
        else cout <<"no"<<"\n";
    }  
}