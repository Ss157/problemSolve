#include <bits/stdc++.h>

// 그리디 알고리즘 #17

using namespace std;

int main(void)
{
    int N, input[10] = {0}, result[10] = {0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }

    int cnt = 0, idx = 0, tmp = 0;
    while (N != idx)
    {
        if (input[idx] == cnt)
        {
            while (1)
                if (result[tmp] == 0)
                {
                    result[tmp] = idx + 1;
                    break;
                }
                else
                    tmp++;
            cnt = 0;
            tmp = 0;
            idx++;
            continue;
        }

        if (result[tmp] == 0)
        {
            tmp++;
            cnt++;
        }
        else
            tmp++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }
}