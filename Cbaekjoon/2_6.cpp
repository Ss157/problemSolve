#include <bits/stdc++.h>

using namespace std;

// 이코테 2021 2강 6번 왕실의 나이트

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1}; // 열
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2}; // 행
// string str;
char ch;
int cnt;

int main(void)
{
    cin >> ch;
    int y = ch - 'a' + 1;
    int x;
    cin >> x;
    for (int i = 0; i < 8; i++)
    {
        int nx = -1, ny = -1;

        nx = x + dx[i];
        ny = y + dy[i];
        if (nx < 1 || nx > 8 || ny < 1 || ny > 8)
            continue;

        cnt++;
    }
    cout << cnt;
}