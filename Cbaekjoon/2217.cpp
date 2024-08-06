#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, result = 0;
    vector<int> vec;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < N; i++)
    {
        if (result < vec.at(i) * (N - i))
            result = vec.at(i) * (N - i);
    }
    cout << result;
}