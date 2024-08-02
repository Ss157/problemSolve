#include <iostream>
#include <queue>

using namespace std;

int visited[100001] = {0};
int method_cnt = 0;
int t;

void bfs(int N, int K)
{
    bool flag = false;

    queue<pair<int, int>> q;
    q.push({N, 0});

    while (!q.empty())
    {
        int dx = q.front().first;
        int time = q.front().second;
        q.pop();
        visited[dx] = 1;

        if (flag == true && dx == K && t == time)
            method_cnt++;

        if (flag == false && dx == K)
        {
            t = time;
            method_cnt++;
            flag = true;
        }

        if (dx - 1 >= 0)
            if (visited[dx - 1] == 0)
                q.push({dx - 1, time + 1});

        if (dx + 1 <= 100000)
            if (visited[dx + 1] == 0)
                q.push({dx + 1, time + 1});

        if (dx * 2 <= 100000)
            if (visited[dx * 2] == 0)
                q.push({dx * 2, time + 1});
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    visited[N] = 1;
    bfs(N, K);
    cout << t << '\n'
         << method_cnt;
}