#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    cin >> N;
    int arr[N],result;
    for(int i=0;i<N;i++) cin>>arr[i];
    if(N==1) result = arr[0]*arr[0];
    else{
        sort(arr,arr+N); result = arr[0] * arr[N-1];
    }
    cout << result << endl;
    return 0;
}