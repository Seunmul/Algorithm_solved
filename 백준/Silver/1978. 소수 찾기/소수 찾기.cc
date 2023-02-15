#include <bits/stdc++.h>

using namespace std;

bool cal(int n){
    if(n==1 or (n%2==0 and n!=2)) return false;
    double tmp = sqrt(n);
    for(int i=3;i<abs(tmp)+1;i+=2)
        if(n%i==0) return false;
    return true;
}

int main(){
    int N,cnt=0;
    int arr[100]={0,};
    cin >> N;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    for(int i=0;i<N;i++)
        if(cal(arr[i]))
            cnt++;
    cout << cnt;
    return 0;
}