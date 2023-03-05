#include <bits/stdc++.h>
using namespace std;
int N,res=0;
string s;
char c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    while (N--)
    {
        vector<char> v(0);
        cin >> s;
        for (char c : s)
        {
            // 스택이 비었으면 push
            if (v.empty()){
                v.push_back(c);
                continue;
            }
            // 최상위 스택과 값이 다르면 push
            if (v.back() != (char)c){
                v.push_back(c);
            }
            // 최상위 스택과 값이 같으면 pop
            else if (v.back() == (char)c){
                v.pop_back();
            }
        }
        if(!v.empty()) continue; // 스택이 비지 않았다면 좋은 수가 아님.
        res++;
    }
    cout << res <<"\n";
    return 0;
}