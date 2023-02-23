#include <bits/stdc++.h>
using namespace std;
int main(){
    int T=10,tmp=0,cnt=0;
    int arr[43]={0,};
    while(T--){
        cin >> tmp;
        arr[tmp % 42]=1;
    }
    for(int i:arr) if(i) cnt++;
    cout << cnt;
    return 0;
}