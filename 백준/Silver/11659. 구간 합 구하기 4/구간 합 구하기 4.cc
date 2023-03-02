#include<bits/stdc++.h>
using namespace std;
int N,M;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // // 시간복잡도 n^2
    // cin >> N >> M;
    // long long arr[N];
    // for(int i=0;i<N;i++) cin >> arr[i];
    // while(M--){
    //     int i,j,sum=0;
    //     cin >> i >> j;
    //     for(;i-1<=j-1;i++){
    //         sum +=arr[i-1];
    //     }
    //     cout << sum<<"\n";
    // }
    // 누적합
    cin >> N >> M;
    long long arr[N+1],tmp;
    arr[0]=0;
    for(int i=1;i<=N;i++) {
        cin >> tmp;
        arr[i]=arr[i-1]+tmp;
    }
    while(M--){
        int i,j;
        cin >> i >> j;
        cout << arr[j]-arr[i-1] <<"\n";
    }
    return 0;
}