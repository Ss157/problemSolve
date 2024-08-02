#include <iostream>
#include <queue>

using namespace std;

int n, m, input_arr[1000][1000], output_arr[1000][1000] = {0}, x, y;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(int startx, int starty)
{
    output_arr[startx][starty] = 1;
    queue<pair<int, int>> q;

    q.push({startx, starty});
    while (!q.empty())
    {
        int pop_x = q.front().first;
        int pop_y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int new_dx = dx[i] + pop_x;
            int new_dy = dy[i] + pop_y;
            if ((new_dx >= 0 && new_dx < n && new_dy >= 0 && new_dy < m) && input_arr[new_dx][new_dy] != 0 && output_arr[new_dx][new_dy] == 0)
            {
                output_arr[new_dx][new_dy] = output_arr[pop_x][pop_y] + 1;
                q.push({new_dx, new_dy});
            }
        }
    }
}

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> input_arr[i][j];
            if (input_arr[i][j] == 2)
            {
                x = i;
                y = j;
            }
        }

    bfs(x, y);
    // output_arr[x][y] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (input_arr[i][j] == 0)
                cout << "0 ";
            else
                cout << output_arr[i][j] - 1 << " ";
        }
        cout << "\n";
    }
}