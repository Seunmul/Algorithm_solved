#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,cnt = 1, A, B;
    cin >> T;
    while (T--){
        cin >> A >> B;
        cout << "Case #" << cnt++ << ": " << A + B << "\n";
    }
    return 0;
}