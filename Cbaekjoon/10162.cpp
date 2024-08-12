#include <bits/stdc++.h>

// 그리디 알고리즘 #9

using namespace std;

int main(void)
{
    int sec, button300 = 0, button60 = 0, button10 = 0;
    bool flag = true;
    cin >> sec;

    while (1)
    {
        if (sec >= 300)
        {
            sec -= 300;
            button300++;
        }
        else if (sec >= 60)
        {
            sec -= 60;
            button60++;
        }
        else
        {
            sec -= 10;
            button10++;
        }

        if (sec == 0)
        {
            flag = true;
            break;
        }
        else if (sec < 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << button300 << " " << button60 << " " << button10;
    else
        cout << "-1";
}