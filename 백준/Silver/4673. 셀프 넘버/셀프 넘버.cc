#include <bits/stdc++.h>

using namespace std;

void chk(int res,int arr[]){
    string tmp=to_string(res);
    for(unsigned long i=0;i<tmp.size();i++) res += tmp[i]-48;
    if(res<=10000) arr[res]=1;
}

int main(){
    int arr[10001]={0,};
    for(int i=1;i<=10000;i++) chk(i,arr);
    for(int i=1;i<=10000;i++) if(!arr[i]) cout<<i<<"\n";
    return 0;
}