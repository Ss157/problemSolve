#include <bits/stdc++.h>

// 그리디 알고리즘 #15

using namespace std;

int main(void)
{
    int N, M, result = 100000;
    int min_line_set = 100000;
    int min_one_line = 100000;

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int line6, line1;
        cin >> line6 >> line1;
        if (min_line_set > line6)
            min_line_set = line6;

        if (min_line_set > line1 * 6)
            min_line_set = line1 * 6;

        if (min_one_line > line1)
            min_one_line = line1;
    }
    if (result > min_line_set * (N / 6 + 1))
        result = min_line_set * (N / 6 + 1);

    if (result > min_line_set * (N / 6) + min_one_line * (N % 6))
        result = min_line_set * (N / 6) + min_one_line * (N % 6);

    if (result > min_one_line * N)
        result = min_one_line * N;
    cout << result;
}