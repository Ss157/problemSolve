#include <bits/stdc++.h>

// ������ 2021 2�� 7�� ���ڿ� ������

using namespace std;

int main(void)
{
    string str, output;
    cin >> str;
    int result = 0, idx = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else
            output.push_back(str[i]);
    }
    sort(output.begin(), output.end());

    cout << output;
    if (result != 0)
        cout << result;
}