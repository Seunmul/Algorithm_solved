#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10001]={0,};
    for(int i=1;i<=10000;i++) {
        string tmp=to_string(i);
        for(char c:tmp) i += c-48;
        if(i<=10000) arr[i]=1;
        i=atoi(tmp.c_str());
    }
    for(int i=1;i<=10000;i++) if(!arr[i]) cout<<i<<"\n";
    return 0;
}