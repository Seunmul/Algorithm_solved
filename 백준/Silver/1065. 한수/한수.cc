#include <bits/stdc++.h>
using namespace std;
bool chk(string N){
    vector<int> v;
    for(char c:N) v.push_back(c-48);
    for(unsigned int i=1;i<N.length()-1;i++)
        if((v.at(i)-v.at(i+1))!=(v.at(i-1)-v.at(i)))
            return false;
    return true;
}
int main(){
    int N,tmp=0,cnt=0;
    cin >> N;
    while(++tmp<=N) if((tmp<100) or chk(to_string(tmp))) cnt++;
    cout << cnt;
    return 0;
}