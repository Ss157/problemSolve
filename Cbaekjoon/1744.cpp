#include <bits/stdc++.h>

// 그리디 알고리즘 #14

using namespace std;

int main(void)
{
    vector<int> pos_num, neg_num, zero_num;
    int N, result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a > 0)
            pos_num.push_back(a);
        else if (a == 0)
            zero_num.push_back(a);
        else
            neg_num.push_back(a);
    }

    sort(pos_num.begin(), pos_num.end());
    sort(neg_num.begin(), neg_num.end(), greater<>());

    while (1)
    {
        int first, second;
        if (!pos_num.empty())
        {
            first = pos_num.back();
            pos_num.pop_back();
        }
        else
            break;

        if (first == 1)
        {
            result++;
            continue;
        }

        if (!pos_num.empty())
        {
            second = pos_num.back();
            pos_num.pop_back();
        }
        else
        {
            result += first;
            break;
        }

        if (second == 1)
        {
            result++;
            pos_num.push_back(first);
            continue;
        }
        else
            result += first * second;
    }
    // cout << result << "\n";
    while (1)
    {
        int first, second;
        if (!neg_num.empty())
        {
            first = neg_num.back();
            neg_num.pop_back();
        }
        else
            break;

        if (!neg_num.empty())
        {
            second = neg_num.back();
            neg_num.pop_back();
        }
        else
        {
            if (!zero_num.empty())
                zero_num.pop_back();
            else
                result += first;
            break;
        }

        result += first * second;
    }

    cout << result;
}