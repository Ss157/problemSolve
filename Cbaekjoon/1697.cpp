#include <iostream>
#include <queue>

using namespace std;

int N, K, sec[100001];

void BFS(void)
{
    queue<int> q;
    q.push(N);

    while (!q.empty())
    {
        int dx = q.front();
        q.pop();

        if (dx == K)
            break;

        if (dx >= 0 && dx <= 100000)
        {
            if (dx - 1 >= 0)
                if (sec[dx - 1] == 0)
                {
                    sec[dx - 1] = sec[dx] + 1;
                    q.push(dx - 1);
                }

            if (dx + 1 <= 100000)
                if (sec[dx + 1] == 0)
                {
                    sec[dx + 1] = sec[dx] + 1;
                    q.push(dx + 1);
                }

            if (dx * 2 <= 100000)
                if (sec[dx * 2] == 0)
                {
                    sec[dx * 2] = sec[dx] + 1;
                    q.push(dx * 2);
                }
        }
    }
}
int main(void)
{
    cin >> N >> K;
    BFS();
    cout << sec[K];
}