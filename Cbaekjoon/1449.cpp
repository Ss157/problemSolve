#include <bits/stdc++.h>

// 그리디 알고리즘 #19

using namespace std;

int main(void)
{
    int N, L, cnt = 0, result = 0;
    vector<int> spot;
    cin >> N >> L;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        spot.push_back(a);
    }

    sort(spot.begin(), spot.end());

    int tmp = spot[0] - 0.5;
    result = 1;
    for (int i = 0; i < N; i++)
    {
        if (tmp <= spot[i] && spot[i] <= tmp + L)
        {
            cnt++;
        }
        else
        {
            tmp = spot[i] - 0.5;
            result++;
            i--;
        }
    }

    cout << result;
}