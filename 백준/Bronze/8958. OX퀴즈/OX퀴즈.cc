#include <bits/stdc++.h>
using namespace std;
int T;
int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    int cor=0,pre=0;
    string tmp;
    while(T--){
        cin >> tmp;
        for(unsigned int i=0;i<tmp.size();i++)
        {
            if(tmp[i]=='O') pre++;
            if(tmp[i]=='X'){
                for(int i=1;i<=pre;i++) cor+=i;
                pre=0;
            }
        }
        for(int i=1;i<=pre;i++) cor+=i;
        cout << cor << "\n"; 
        cor=0;pre=0;
    }
    return 0;
}