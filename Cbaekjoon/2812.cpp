#include <bits/stdc++.h>

// 그리디 알고리즘 #23

using namespace std;

int N, K, cnt = 0;
vector<char> vec, tmp;
stack<char> s;

void output(void)
{
    while (!s.empty())
    {
        tmp.push_back(s.top());
        s.pop();
    }

    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        cout << tmp[i];
    }
}
int main(void)
{
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        char a;
        cin >> a;
        vec.push_back(a);
    }

    s.push(vec[0]);
    int idx;
    for (idx = 1; idx < N; idx++)
    {
        if (cnt == K)
        {
            s.push(vec[idx]);
            continue;
        }

        if (s.empty())
            s.push(vec[idx]);
        else if (s.top() < vec[idx])
        {
            s.pop();
            cnt++;

            if (cnt == K)
            {
                s.push(vec[idx]);
                continue;
            }
            while (1)
            {
                if (s.empty())
                    break;

                if (s.top() < vec[idx])
                {
                    s.pop();
                    cnt++;

                    if (cnt == K)
                        break;
                }
                else
                    break;
            }

            s.push(vec[idx]);
        }
        else
            s.push(vec[idx]);
    }

    for (int i = cnt; i < K; i++)
        s.pop();

    output();
}