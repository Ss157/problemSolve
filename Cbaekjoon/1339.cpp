#include <bits/stdc++.h>

// 그리디 알고리즘 #5

using namespace std;

int compare(int &a, int &b)
{
    return a > b;
}

int main(void)
{
    int N, result = 0;
    int a[30] = {0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        int v = 1;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            a[str[i] - 'A'] += v;
            v *= 10;
        }
    }

    sort(a, a + 26, compare);
    
    int num = 9;
    for (int i = 0; i < 30; i++)
    {
        if (a[i] == 0)
            break;

        result += a[i] * num;
        num--;
    }

    cout << result;
}