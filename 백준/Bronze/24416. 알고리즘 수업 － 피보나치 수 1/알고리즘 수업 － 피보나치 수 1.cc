#include <bits/stdc++.h>
using namespace std;

int fib(int n, int *cnt)
{

    if (n == 1 || n == 2)
    {
        (*cnt)++;
        return 1;
    }
    else
        return (fib(n - 1, cnt) + fib(n - 2, cnt));
}

int fibonacci(int n, int *cnt)
{
    int f[40] = {
        0,
    };
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        (*cnt)++;

        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main()
{
    int N;
    int fib_cnt = 0;
    cin >> N;
    fib(N, &fib_cnt);
    cout << fib_cnt << " ";

    fib_cnt = 0;
    fibonacci(N, &fib_cnt);
    cout << fib_cnt;
    return 0;
}