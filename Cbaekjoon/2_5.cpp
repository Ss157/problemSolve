#include <bits/stdc++.h>

// ������ 2021 2�� 5�� �ð�

using namespace std;

int h, cnt = 0;

void check(int hour, int min, int sec)
{
    if (hour % 10 == 3 || min / 10 == 3 || min % 10 == 3 || sec / 10 == 3 || sec % 10 == 3)
        cnt++;
}

int main(void)
{
    cin >> h;
    for (int i = 0; i <= h; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            for (int k = 0; k < 60; k++)
            {
                check(i, j, k);
            }
        }
    }
    cout << cnt;
}