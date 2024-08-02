#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int N, M, graph[10][10] = {0};
    cin >> N >> M;
    for (int i = 1; i < N + 1; i++)
        for (int j = 1; j < M + 1; j++)
        {
            char a;
            cin >> a;
            graph[i][j] = a - '0';
        }
    int ans = -1;
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < M + 1; j++)
        {
            for (int x = -N; x < N; x++)
            {
                for (int y = -M; y < M; y++)
                {
                    int row = i, column = j, num = 0;
                    if (x == 0 && y == 0)
                        continue;
                    while (0 < row && row < N + 1 && 0 < column && column < M + 1)
                    {
                        num *= 10;
                        num += graph[row][column];
                        // cout << ans << " " << x << " " << y << " " << " " << row << " " << column << "---\n";
                        int tmp = sqrt(num);
                        if (tmp * tmp == num)
                            if (ans < num)
                                ans = num;
                        row += x;
                        column += y;
                    }
                    // cout << ans << " " << x << " " << y << " " << " " << row << " " << column << "---\n";
                }
                // cout << "===\n";
            }
        }
    }
    cout << ans;
}