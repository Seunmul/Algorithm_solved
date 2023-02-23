#include<bits/stdc++.h>
using namespace std;
int T, tmp;
string com;
int main(){
    queue<int> q;
    cin >> T;
    while(T--){
        cin >> com;
        if(com=="push"){
            cin >> tmp;
            q.push(tmp);
        }
        else if(com=="pop"){
            if(q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() <<"\n";
                q.pop();
            }
        }
        else if(com=="size") cout << q.size() <<"\n";
        else if(com=="empty") q.empty() ? cout << 1 <<"\n":cout << 0 <<"\n";
        else if(com=="front") q.empty() ? cout << -1 << "\n" : cout << q.front() <<"\n";
        else if(com=="back") q.empty() ? cout << -1 << "\n" : cout << q.back() <<"\n";
    }
    return 0;
}