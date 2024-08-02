#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int N, K;
bool visit[100001] = {0};

int bfs(int x)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, x});

    while (!q.empty())
    {

        int time = q.top().first;
        int dx = q.top().second;
        q.pop();
        if (K == dx)
        {
            return time;
        }
        visit[dx] = true;

        if (dx * 2 <= 100000 && visit[dx * 2] == false)
        {
            q.push({time, dx * 2});
            visit[dx * 2] = true;
        }

        if (dx + 1 <= 100000 && visit[dx + 1] == false)
        {
            q.push({time + 1, dx + 1});
            visit[dx + 1] = true;
        }

        if (dx - 1 >= 0 && visit[dx - 1] == false)
        {
            q.push({time + 1, dx - 1});
            visit[dx - 1] = true;
        }
    }
}
int main(void)
{
    cin >> N >> K;
    cout << bfs(N);
}