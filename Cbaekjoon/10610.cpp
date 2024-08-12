#include <bits/stdc++.h>

// 그리디 알고리즘 #11

using namespace std;

int main(void)
{
    string num;
    cin >> num;
    bool iszero = false;
    long long sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == '0')
        {
            iszero = true;
        }
        sum += num[i] - '0';
    }

    if(!iszero || sum % 3 != 0)
    {
        cout << "-1";
    }
    else
    {
        sort(num.begin(), num.end(), greater<>());
        cout << num;
    }   
}