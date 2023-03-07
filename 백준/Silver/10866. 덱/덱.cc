#include<bits/stdc++.h>
using namespace std;
int T, tmp;
string com;
int main(){
    deque<int> dq;
    cin >> T;
    while(T--){
        cin >> com;
        if(com=="push_front"){
            cin >> tmp;
            dq.push_front(tmp);
        }
        else if(com=="push_back"){
            cin >> tmp;
            dq.push_back(tmp);
        }
        else if(com=="pop_front"){
            if(dq.empty()) cout << -1 << "\n";
            else {
                cout << dq.front() <<"\n";
                dq.pop_front();
            }
        }
        else if(com=="pop_back"){
            if(dq.empty()) cout << -1 << "\n";
            else {
                cout << dq.back() <<"\n";
                dq.pop_back();
            }
        }
        else if(com=="size") cout << dq.size() <<"\n";
        else if(com=="empty") dq.empty() ? cout << 1 <<"\n":cout << 0 <<"\n";
        else if(com=="front") dq.empty() ? cout << -1 << "\n" : cout << dq.front() <<"\n";
        else if(com=="back") dq.empty() ? cout << -1 << "\n" : cout << dq.back() <<"\n";
    }
    return 0;
}