#include <bits/stdc++.h>
using namespace std;
bool chk(string N){
    vector<int> v;
    if(N.length()<=2) return true;
    for(unsigned int i=0;i<N.length();i++)
        v.push_back(N[i]-48);
    for(unsigned int i=1;i<v.size()-1;i++)
        // cout << "사이즈:"<< v.size() << "숫자 :" << N<< "\n";
        if((v.at(i)-v.at(i+1))!=(v.at(i-1)-v.at(i)))
            return false;
    return true;
}
int main(){
    int N;
    cin >> N;
    int tmp=1,cnt=0;
    while(tmp<=N)
        if(chk(to_string(tmp++)))
            cnt++;
    cout << cnt;
    return 0;
}