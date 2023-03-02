#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (true){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        int tmp[3] = {a, b, c};
        sort(tmp, tmp + 3);
        if (tmp[2] * tmp[2] == tmp[1] * tmp[1] + tmp[0] * tmp[0]) cout << "right\n";
        else cout << "wrong\n";
    } 
    return 0;
}