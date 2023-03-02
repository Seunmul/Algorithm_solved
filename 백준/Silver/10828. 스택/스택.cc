#include<bits/stdc++.h>
using namespace std;
int T, tmp;
string com;
int main(){
    vector<int> v;
    cin >> T;
    while(T--){
        cin >> com;
        if(com=="push"){
            cin >> tmp;
            v.push_back(tmp);
        }
        else if(com=="pop"){
            if(v.empty()) cout << -1 << "\n";
            else {
                cout << v.back() <<"\n";
                v.pop_back();
            }
        }
        else if(com=="size") cout << v.size() <<"\n";
        else if(com=="empty") v.empty() ? cout << 1 <<"\n" : cout << 0 <<"\n";
        else if(com=="top") v.empty() ? cout << -1 << "\n" : cout << v.back() <<"\n";
    }
    return 0;
}