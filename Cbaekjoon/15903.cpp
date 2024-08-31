#include <bits/stdc++.h>

// 그리디 알고리즘 #26

using namespace std;

int main(void)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    int n, m;
    long long result = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }

    while (m--)
    {
        long long first = pq.top();
        pq.pop();
        long long second = pq.top();
        pq.pop();
        pq.push(first + second);
        pq.push(first + second);
    }

    while (!pq.empty())
    {
        result += pq.top();
        pq.pop();
    }

    cout << result;
}