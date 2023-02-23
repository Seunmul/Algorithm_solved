#include<bits/stdc++.h>
using namespace std;
int N,M;
int tmp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[100001]={0,};
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr+N);
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        cout << binary_search(arr, arr+N, tmp) << '\n';
    }
    return 0;
}