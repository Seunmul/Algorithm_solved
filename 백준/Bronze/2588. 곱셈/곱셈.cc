#include <bits/stdc++.h>

using namespace std;
string a, b;
int anum, bnum, n1, n2, n3;

int main()
{
    cin >> a >> b;

    anum = atoi(a.c_str());
    bnum = atoi(b.c_str());

    n3 = b.c_str()[2] - 48;
    n2 = b.c_str()[1] - 48;
    n1 = b.c_str()[0] - 48;

    cout << anum * n3 << "\n"
         << anum * n2 << "\n"
         << anum * n1 << "\n"
         << anum * bnum << endl;

    return 0;
}
