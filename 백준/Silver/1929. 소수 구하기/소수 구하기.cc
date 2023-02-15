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
    int M,N;
    cin >> M >> N;
    for(int i=M;i<=N;i++)
        if(cal(i))
            cout<<i<<"\n";

    return 0;
}