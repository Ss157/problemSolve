#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;

    deque<int> dq;
    for (int i = 1; i < N + 1; i++)
    {
        dq.push_back(i);
    }

    int ans = 0;
    while (M--)
    {
        int loca;
        cin >> loca;
        int idx = find(dq.begin(), dq.end(), loca) - dq.begin();
        while (dq.front() != loca)
        {
            if (idx < (int)dq.size() - idx)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            ans++;
        }
        dq.pop_front();
    }

    cout << ans;
}