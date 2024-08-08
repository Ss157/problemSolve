#include <bits/stdc++.h>

// 그리디 알고리즘 #4

using namespace std;

int compare(const string &a, const string &b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    else
    {
        return a.size() > b.size();
    }
}

int main(void)
{
    vector<string> strs;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        strs.push_back(str);
    }

    sort(strs.begin(), strs.end());
    strs.erase(unique(strs.begin(), strs.end()), strs.end());

    N = strs.size();
    
    int result = strs.size();
    sort(strs.begin(), strs.end(), compare);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;

            if (strs[i].size() > strs[j].size())
                break;

            if (strncmp(strs[i].c_str(), strs[j].c_str(), strs[i].size()) == 0)
            {
                result--;
                break;
            }
        }
    }

    cout << result;
}