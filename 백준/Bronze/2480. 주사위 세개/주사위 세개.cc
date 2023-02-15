#include <bits/stdc++.h>

using namespace std;
bool compare(int a,int b){
    return a>b;
}

int main(){
    int a,b,c;
    int result=0;
    cin >> a >> b >> c;
    if(a==b and b==c and c==a)
        result = 10000+a*1000;
    else if(a==b or c==a)
        result = 1000+a*100;
    else if(b==c)
        result = 1000+b*100;
    else
    {
        int d[3]={a,b,c};
        sort(d,d+3,compare);
        result =d[0]*100;
    }
        cout << result <<"\n";

    return 0;
}