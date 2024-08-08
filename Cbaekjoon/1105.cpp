#include <bits/stdc++.h>

// 그리디 알고리즘 #3
using namespace std;

int main(void)
{
    int L, R, result = 10, cnt = 0;

    cin >> L >> R;

    for (int i = L; i < R + 1; i++)
    {
        string str = to_string(i);
        cnt = 0;
        for (int j = 0; j < str.size(); j++)
        {
            if(str.at(j) == '8')
            {
                cnt++;
            }
        }
        if(cnt < result)
        {
            result = cnt;
        }
        if(result == 0)
            break;
    }
    cout << result;
}