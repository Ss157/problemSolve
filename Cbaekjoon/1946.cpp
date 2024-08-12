#include <bits/stdc++.h>

// 그리디 알고리즘 #12

using namespace std;

int main(void)
{
    int T, N;
    vector<pair<int, int>> vec;
    cin >> T;
    while (T--)
    {
        int result = 1;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int first, second;
            cin >> first >> second;
            vec.push_back({first, second});
        }

        sort(vec.begin(), vec.end());

        long long tmp = vec.at(0).second;
        for (int i = 1; i < N; i++)
        {
            if (vec.at(i).second < tmp) // 탈락 X
            {
                result++;
                tmp = vec.at(i).second;
            }
        }

        cout << result << "\n";

        for (int i = 0; i < N; i++)
        {
            vec.pop_back();
        }
    }
}