#include <bits/stdc++.h>

// 그리디 알고리즘 #13

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    long long result = 0;
    vector<pair<int, int>> jewels;
    vector<int> bags;

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        jewels.push_back({a, b});
    }

    for (int i = 0; i < K; i++)
    {
        int a;
        cin >> a;
        bags.push_back(a);
    }

    sort(jewels.begin(), jewels.end());
    sort(bags.begin(), bags.end());


    priority_queue<int> pq;
    int idx = 0;
    for (int i = 0; i < K; i++)
    {
        for (int j = idx; j < N; j++)
        {
            if (bags[i] >= jewels[j].first)
            {
                pq.push(jewels[j].second);
                idx++;
            }
            else
            {
                break;
            }
        }

        if(!pq.empty())
        {
            result += pq.top();
            pq.pop();
        }
    }

    cout << result;
}