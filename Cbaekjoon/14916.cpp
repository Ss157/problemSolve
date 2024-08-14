#include <bits/stdc++.h>

// 그리디 알고리즘 #16

using namespace std;

int main(void)
{
    int n, result = 0;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        if (n % 5 == 0)
        {
            flag = true;
            result += n / 5;
            break;
        }
        
        if(n < 0)
            break;
        n -= 2;
        result++;
    }
    if (flag)
        cout << result;
    else
        cout << "-1";
}