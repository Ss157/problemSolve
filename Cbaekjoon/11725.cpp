#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void make_graph(int N, vector<int> *vec)
{
    int u, v;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
}

void BFS(vector<int> *vec, int *ans)
{
    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int dx = q.front();
        q.pop();

        for (int i = 0; i < vec[dx].size(); i++)
        {
            if (ans[vec[dx][i]] == 0)
            {
                q.push(vec[dx][i]);
                ans[vec[dx][i]] = dx;
            }
        }
    }
}

int main(void)
{
    int N, ans[100001] = {0};
    vector<int> v[100001];
    ans[1] = -1;

    cin >> N;
    make_graph(N, v);
    BFS(v, ans);

    for (int i = 2; i < N + 1; i++)
    {
        cout << ans[i] << '\n';
    }
}