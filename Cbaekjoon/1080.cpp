#include <iostream>

using namespace std;

int main(void)
{
    int N, M, A[50][50], B[50][50], ans = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char a;
            cin >> a;
            A[i][j] = a - '0';
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char a;
            cin >> a;
            B[i][j] = a - '0';
        }
    }

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 0; j < M - 2; j++)
        {
            if (A[i][j] != B[i][j])
            {
                for (int k = i; k < i + 3; k++)
                    for (int l = j; l < j + 3; l++)
                        A[k][l] = 1 - A[k][l];
                ans++;
            }
        }
    }
    bool flag = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] != B[i][j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        cout << ans;
    else
        cout << "-1";
}