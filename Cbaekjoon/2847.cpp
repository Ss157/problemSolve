#include <bits/stdc++.h>

// 그리디 알고리즘 #21

using namespace std;

int main(void)
{
    int N, result = 0;
    vector<int> vec;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    for (int i = N - 1; i > 0; i--)
    {
        while (vec[i] <= vec[i - 1])
        {
            vec[i - 1]--;
            result++;
        }
    }

    cout << result;
}