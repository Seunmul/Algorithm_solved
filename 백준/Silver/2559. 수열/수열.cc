#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,K,tmp,result= -1000000;
    int psum[100001];
    cin >> N >> K;
    for(int i=1;i<=N;i++){
        cin >> tmp;
        psum[i]=psum[i-1]+tmp;
    }
    for(int j=K;j<=N;j++){
        result = max(result,psum[j]-psum[j-K]);
    }
    cout << result << "\n";

    return 0;
}

