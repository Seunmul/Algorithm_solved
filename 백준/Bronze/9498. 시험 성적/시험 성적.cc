#include<bits/stdc++.h>
using namespace std;
int g;
int main(){
    cin >> g;
    if(g<60) cout << 'F';
    else if(g>=60 && g<70) cout << 'D';
    else if(g>=70 && g<80) cout << 'C';
    else if(g>=80 && g<90) cout << 'B';
    else cout << 'A';
    return 0;
}