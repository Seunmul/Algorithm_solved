#include <bits/stdc++.h>
using namespace std;
bool cal(int n){
    if(n==1 or (n%2==0 and n!=2)) return false;
    int tmp = sqrt(n)+1; for(int i=3;i<tmp;i+=2) if(n%i==0) return false;
    return true;
}
int main(){
    int T;int N; cin >> T; int arr[T];
    for(int i=0;i<T;i++){
        cin >> N;
        bool chk = cal(N);
        if(chk) arr[i]=0;
        else{
            int front=N,back=N;
            while(!cal(front)) front--;
            while(!cal(back)) back++;
            arr[i]=back-front;
        }
    }
    for(int i: arr)
        cout << i << "\n";
}