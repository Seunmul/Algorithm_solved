#include <bits/stdc++.h>
using namespace std;
bool cal(int n,int D){
    if(n==1 or (n%2==0 and n!=2)) return false;
    int tmp = sqrt(n)+1; for(int i=3;i<tmp;i+=2) if(n%i==0) return false;
    string str = to_string(n);
    for(int i=0;i<=str.length();i++) if(str[i]-48==D) return true;
    return false;
}
int main(){
    int A,B,D,cnt=0;
    cin >>A>>B>>D;
    for(int i=A;i<B;i++) if(cal(i,D)) cnt++;
    cout << cnt << "\n";
    return 0;
}