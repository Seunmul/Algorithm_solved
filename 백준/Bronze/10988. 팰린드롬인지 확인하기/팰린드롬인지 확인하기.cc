#include<bits/stdc++.h>
using namespace std;
string tmp;
vector<char> v;
int chk(string tmp){
    for(char c:tmp) v.push_back(c);
    for(char c:tmp){
        if(v.back()==c) v.pop_back();
        else return 0;
    }
    return 1;
}
int main(){
    cin >> tmp;
    cout << chk(tmp);
    return 0;
}