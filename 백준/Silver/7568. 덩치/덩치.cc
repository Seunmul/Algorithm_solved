#include <bits/stdc++.h>
using namespace std;

typedef struct _info{
    int x;
    int y;
} info;

int N;
int main()
{
    cin >> N;
    int res[N];
    info inf[N];
    for (int i = 0; i < N; i++) cin >> inf[i].x >> inf[i].y;
    for (int j = 0; j < N; j++){   
        int cnt=0;
        for (int i = 0; i < N; i++)if(inf[i].x > inf[j].x && inf[i].y > inf[j].y)cnt++;        
        res[j]=cnt;
    }
    for (int i:res) cout << i+1 << " ";
    return 0;
}