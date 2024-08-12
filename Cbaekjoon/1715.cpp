#include <bits/stdc++.h>

// 그리디 알고리즘 #10

using namespace std;

int main(void)
{
    long long N, result = 0;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }

    while (1)
    {
        if (pq.size() == 1)
            break;

        long long first = pq.top();
        pq.pop();
        long long second = pq.top();
        pq.pop();

        long long tmp = first + second;
        pq.push(tmp);

        result += tmp;
    }

    cout << result;
}