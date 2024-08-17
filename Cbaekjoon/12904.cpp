#include <bits/stdc++.h>

// 그리디 알고리즘 #20

using namespace std;

int main(void)
{
    string S, T;
    cin >> S >> T;

    bool flag = true;
    int len1 = S.size();
    int len2 = T.size();

    while (1)
    {
        if (S.size() > T.size())
        {
            flag = false;
            break;
        }

        if (S.size() == T.size())
        {
            if (S == T)
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (T[T.size() - 1] == 'A')
        {
            T.erase(T.size() - 1, 1);
        }
        else if (T[T.size() - 1] == 'B')
        {
            T.erase(T.size() - 1, 1);
            reverse(T.begin(), T.end());
        }
    }

    cout << flag;
}