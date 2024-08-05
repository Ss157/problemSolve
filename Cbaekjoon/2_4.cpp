#include <bits/stdc++.h>

// 이코테 2021 2강 4번 상하좌우

using namespace std;

int n;
string plans;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main(void)
{
    cin >> n;
    cin.ignore(); //***한 줄 입력받기 전 버퍼 비우기 필수
    getline(cin, plans);
    int x = 1, y = 1;
    int nx = -1, ny = -1;
    for (int i = 0; i < plans.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (plans[i] == moveTypes[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

        if (nx < 1 || nx > n || ny < 1 || ny > n)
            continue;

        x = nx;
        y = ny;
    }

    cout << x << " " << y;
}