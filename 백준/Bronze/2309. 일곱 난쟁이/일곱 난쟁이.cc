#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {
        0,
    };
    for (int i = 0; i < 9; i++)
        cin >> arr[i];
    sort(arr,arr+9);
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                for (int m = k + 1; m < 9; m++)
                {
                    for (int n = m + 1; n < 9; n++)
                    {
                        for (int l = n + 1; l < 9; l++)
                        {
                            for (int p = l + 1; p < 9; p++)
                            {
                                int tmp = arr[i] + arr[j] + arr[k] + arr[m] + arr[n] + arr[l] + arr[p];
                                // cout << i << " " << j << " " << k << " " << m << " " << n << " " << l << " " << p << " ";
                                // cout << tmp << "\n";
                                if (tmp == 100){
                                    cout << arr[i] << "\n"
                                         << arr[j] << "\n"
                                         << arr[k] << "\n"
                                         << arr[m] << "\n"
                                         << arr[n] << "\n"
                                         << arr[l] << "\n"
                                         << arr[p] << "\n";
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}