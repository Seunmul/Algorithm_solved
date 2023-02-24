#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,cnt=0;
    string temp;
    cin >> T;
    while(T--){
        cin >> temp;
        vector<int> v;
        char arr[27]={0,};
        cnt++;
        for(unsigned int i=0;i<temp.size();i++){
            int j=(int)temp[i]-97;
            if(v.empty()) { v.push_back(j); arr[j]=1; continue;}
            if(v.back()!=j && arr[j]!=1){ v.push_back(j); arr[j]=1; continue;}
            if(v.back()==j) continue;
            else{ cnt--;break; } 
        }
    }
    cout << cnt << "\n";
    return 0;
}
