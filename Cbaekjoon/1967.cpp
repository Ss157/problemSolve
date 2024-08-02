#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> graph[10001];
bool visited[10001] = {false};
int node, ans = 0;
void DFS(int x, int dist)
{
    visited[x] = true;
    if (dist > ans)
    {
        ans = dist;
        node = x;
    }
    for (int i = 0; i < graph[x].size(); i++)
    {
        int next_node = graph[x][i].first;
        int next_dist = graph[x][i].second + dist;
        if (!visited[next_node])
        {
            visited[next_node] = true;
            DFS(next_node, next_dist);
            visited[next_node] = false;
        }
    }
}

void make_graph(int nodes)
{
    int u, v, w;
    for (int i = 0; i < nodes - 1; i++)
    {
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
}

int main(void)
{
    int n;
    cin >> n;
    make_graph(n);
    DFS(1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        visited[i] = false;
    }
    DFS(node, 0);
    cout << ans;
}