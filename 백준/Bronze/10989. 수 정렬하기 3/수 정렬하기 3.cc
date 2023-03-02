#include <iostream>
using namespace std;
int T;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    int arr[10001] = {
        0,
    };
    // 숫자 개수 카운트
    for (int i = 0; i < T; i++)
    {
        int a;
        cin >> a;
        arr[a] += 1;
    }

    for (int i = 1; i <= 10000; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";

    return 0;
}
