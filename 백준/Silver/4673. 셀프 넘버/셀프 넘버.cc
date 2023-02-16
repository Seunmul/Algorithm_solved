#include <bits/stdc++.h>

using namespace std;

int chk(int N){
    string tmp="1";
    int tmp_int=atoi(tmp.c_str());
    while(tmp_int<N){
        int res=tmp_int;
        for(unsigned long i=0;i<tmp.size();i++) res += tmp[i]-48;
        if(res==N) return false;
        tmp=to_string(++tmp_int);
    }
    return true;
}

int main(){
    for(int i=1;i<=10000;i++) if(chk(i)) cout<<i<<"\n";
    return 0;
}