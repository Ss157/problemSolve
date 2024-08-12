#include <bits/stdc++.h>

// 그리디 알고리즘 #8

using namespace std;

int main(void)
{
    long long N, result = 0;
    cin >> N;
    int road_len[100000] = {0};
    int price_per_liter[100000] = {0};

    for (int i = 0; i < N - 1; i++)
    {
        int a;
        cin >> a;
        road_len[i] = a;
    }

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        price_per_liter[i] = a;
    }

    long long now = price_per_liter[0];
    result = now * road_len[0];

    for (int i = 1; i < N - 1; i++)
    {
        if (price_per_liter[i] < now) // 이번에 기름을 왕창 사야 함
        {
            now = price_per_liter[i];
            result += now * road_len[i];
        }
        else // 다음 주유소를 갈 만큼만 기름을 사기
        {
            result += now * road_len[i];
        }
    }

    cout << result;
}