#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={0,};
    int asc=0,desc=0;

    for(int i=0;i<8;i++) cin>>arr[i];
    for(int i=1;i<8;i++){
        if(arr[i]-arr[i-1]==1 && desc==0) asc++;
        else if(arr[i-1]-arr[i]==1 && asc==0) desc++;
        else break;
    }
    if(asc==7) cout << "ascending" << "\n";
    else if(desc==7) cout << "descending" << "\n";
    else cout << "mixed" <<"\n";
    return 0;
}