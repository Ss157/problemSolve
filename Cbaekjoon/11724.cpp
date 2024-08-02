#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void make_graph(int M, vector<int> *vec)
{
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
}

void BFS(int v, vector<int> *vec, bool *check)
{
    queue<int> q;

    q.push(v);

    while (!q.empty())
    {
        int dv = q.front();
        q.pop();

        for (int i = 0; i < vec[dv].size(); i++)
        {
            if (check[vec[dv][i]] == false)
            {
                q.push(vec[dv][i]);
                check[vec[dv][i]] = true;
            }
        }
    }
}

int main(void)
{
    int N, M, ans = 0;
    bool check[1001] = {false};
    cin >> N >> M;
    vector<int> v[1001];

    make_graph(M, v);

    for (int i = 1; i < N + 1; i++)
    {
        if (check[i] == true)
            continue;

        BFS(i, v, check);
        ans++;
    }

    cout << ans;
}