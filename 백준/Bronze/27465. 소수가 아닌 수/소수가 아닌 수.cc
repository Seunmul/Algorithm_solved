#include <bits/stdc++.h>
using namespace std;
bool cal(long n){
    if(n==1 or (n%2==0 and n!=2)) return false;
    long tmp = sqrt(n)+1; for(long i=3;i<tmp;i+=2) if(n%i==0) return false;
    return true;
}
int main(){
    long N;
    cin>>N;
    while(cal(N)) N++;
    cout<<N;
    return 0;
}