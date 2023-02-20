#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[100][100]={0,};
    int T,a,b,cnt=0;
    cin >> T;
    while(T--){
        cin >> a >> b;
        for(int i=a;i<a+10;i++)
            for(int j=b;j<b+10;j++) arr[i][j]=1;
    }
    for(int i=0;i<100;i++)
        for(int j:arr[i]) if(j==1) cnt++;
    cout << cnt;
    return 0;
}