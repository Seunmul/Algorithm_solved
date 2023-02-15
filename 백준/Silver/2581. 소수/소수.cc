#include <bits/stdc++.h>
using namespace std;
bool cal(int n){
    if(n==1 or (n%2==0 and n!=2)) return false;
    int tmp = sqrt(n)+1; for(int i=3;i<tmp;i+=2) if(n%i==0) return false;
    return true;
}
int main(){
    int M,N;
    vector<int>v;
    cin >> M >> N;
    for(int i=M;i<=N;i++) if(cal(i)) v.push_back(i);
    if(v.empty()) cout<<-1<<"\n";
    else{
        sort(v.begin(),v.end());
        cout << accumulate(v.begin(),v.end(),0) << "\n" << v.at(0);
    }

    return 0;
}