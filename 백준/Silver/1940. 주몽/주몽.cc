#include <bits/stdc++.h>
using namespace std;

int N,M,K=2,cnt=0;
void combi(int start, vector<int> v, int a[])
{
    if (v.size() == K)
    {
        // for (int i : v)
        //     cout << i << " ";
        // cout << '\n';
        if((v.at(0)+v.at(1))==M)
            cnt++;
        return;
    }
    for (int i = start + 1; i < N; i++)
    {
        v.push_back(a[i]);
        combi(i, v, a);
        v.pop_back();
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    int a[N];
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    vector<int> v;
    // combi(-1, v, a);
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            // cout << a[i] << " " <<a[j] << "\n";
            if((a[i]+a[j])==M)
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}