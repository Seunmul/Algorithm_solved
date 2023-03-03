#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C,arr[10]={0,};
    string tmp;
    cin >> A >> B >> C;
    tmp = to_string((long)A*B*C);
    for(char c:tmp) arr[(int)c-48]+=1;
    for(int i: arr) cout << i << "\n";
    return 0;
}