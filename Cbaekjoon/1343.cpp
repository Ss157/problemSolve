#include <bits/stdc++.h>

// 그리디 알고리즘 #6

using namespace std;

int main(void)
{
    string str, result;
    cin >> str;
    int cnt = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            if (cnt == 0)
                result.push_back('.');
            else if (cnt == 2)
            {
                for (int i = 0; i < 2; i++)
                {
                    result.push_back('B');
                }
                result.push_back('.');
                cnt = 0;
            }
            else
            {
                break;
            }
        }
        else if (str[i] == 'X')
            cnt++;

        if (cnt == 4)
        {
            for (int i = 0; i < 4; i++)
            {
                result.push_back('A');
            }
            cnt = 0;
        }
    }

    if (cnt == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            result.push_back('B');
        }
        cnt = 0;
    }

    if (cnt == 0)
        cout << result;
    else
        cout << "-1";
}