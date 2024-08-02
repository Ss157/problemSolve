#include <iostream>

using namespace std;

int N, M;
int ans[9] = {0};
bool visited[9] = {0};

void PRINT_ANS()
{
    for (int i = 0; i < N; i++)
    {
        if (visited[i] == 1)
        {
            cout << ans[i] << " ";
        }
    }
    cout << "\n";
}

void dfs(int cnt, int idx)
{
    if (M == cnt)
    {
        PRINT_ANS();
        return;
    }

    for (int i = idx; i < N; i++)
    {
        if (visited[i])
            continue;
        visited[i] = true;

        dfs(cnt + 1, i + 1);
        visited[i] = 0;
    }
}

int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        ans[i] = i + 1;
        visited[i] = false;
    }
    dfs(0, 0);
}