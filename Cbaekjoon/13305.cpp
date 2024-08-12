#include <bits/stdc++.h>

// �׸��� �˰��� #8

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
        if (price_per_liter[i] < now) // �̹��� �⸧�� ��â ��� ��
        {
            now = price_per_liter[i];
            result += now * road_len[i];
        }
        else // ���� �����Ҹ� �� ��ŭ�� �⸧�� ���
        {
            result += now * road_len[i];
        }
    }

    cout << result;
}