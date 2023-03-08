#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, K=-1, tmp=0;
    cin >> A >> B;
    tmp = A * B;
    while (K != 0)
    {
        K = A % B;
        A = B;
        B = K;
    }
    cout << A << "\n"
         << tmp / A << "\n";
    return 0;
}