#include <bits/stdc++.h>
using namespace std;
int T;
int main(){
    cin >> T;
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int arr[T];
    for(int i=0;i<T;i++) cin >> arr[i];
    sort(arr,arr+T);
    for(int i:arr) cout << i << "\n";
    return 0;
}
