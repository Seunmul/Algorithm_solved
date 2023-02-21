//피보나치와 점화식
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int arr[46]={0,};
    cin >> N;
    for(int i=0;i<=N;i++) i<2? arr[i]=i : arr[i]=arr[i-1]+arr[i-2];
    cout << arr[N];
    return 0;
}