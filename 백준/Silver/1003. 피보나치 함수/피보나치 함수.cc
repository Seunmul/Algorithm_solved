#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        int arr[41]={0,};
        for(int i=0;i<=N;i++) i<2? arr[i]=i : arr[i]=arr[i-1]+arr[i-2];
        if(N==0) cout << 1 <<" "<< 0<<"\n";
        if(N!=0) cout << arr[N-1] <<" "<< arr[N]<<"\n";
    }
    return 0;
}