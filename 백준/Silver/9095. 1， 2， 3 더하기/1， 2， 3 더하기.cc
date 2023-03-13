#include <bits/stdc++.h>
using namespace std;
int T, n, cnt;
void go(int n) {
    if (n == 0){
        cnt++; return;
    }
    if (n >= 1) go(n - 1);
    if (n >= 2) go(n - 2);
    if (n >= 3) go(n - 3);
    return;
}
int main() {
    cin >> T;
    while (T--){
        cin >> n; go(n);
        cout << cnt << "\n";
        cnt = 0;
    }
    return 0;
}