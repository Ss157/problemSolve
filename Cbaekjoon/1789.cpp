#include <bits/stdc++.h>

// 그리디 알고리즘 #7

using namespace std;

int main(void)
{
    long long S, tmp = 0;
    cin >> S;

    int i = 1;
    while(S > tmp)
    {
        tmp += i;
        i++;
    }
    // cout << tmp << " " << i;

    if(S == tmp)
        cout << i - 1;
    else
        cout << i - 2;
}