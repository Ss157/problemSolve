#include <bits/stdc++.h>

// 그리디 알고리즘 #18

using namespace std;

int main(void)
{
    bool flag = true;
    char tmp = '0';
    char result[50] = {0};
    int a = 0;
    string str;
    cin >> str;

    sort(str.begin(), str.end());

    vector<char> front;
    vector<char> back;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            front.push_back(str[i]);
            i++;
            back.push_back(str[i]);
        }
        else
        {
            if (a == 0)
            {
                flag = false;
                a++;
                tmp = str[i];
            }
            else
            {
                a++;
                cout << "I'm Sorry Hansoo";
                break;
            }
        }
    }
    
    if (a < 2)
    {
        sort(front.begin(), front.end(), greater<>());
        sort(back.begin(), back.end());
        int len = front.size();
        for (int i = 0; i < len; i++)
        {
            cout << front.back();
            front.pop_back();
        }
        
        if (!flag)
        {
            cout << tmp;
        }

        int len2 = back.size();
        for (int i = 0; i < len2; i++)
        {

            cout << back.back();
            back.pop_back();
        }
    }
}