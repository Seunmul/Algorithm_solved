#include<bits/stdc++.h>
using namespace std;
int N,tmp;
int main(){
    cin >> N;
    queue<int> q;
    for(int i=1;i<=N;i++) q.push(i);
    while(q.size()!=1){
        q.pop();
        tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout << q.back();
    return 0;
}