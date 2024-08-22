#include <bits/stdc++.h>

// 그리디 알고리즘 #22

using namespace std;

int main(void)
{
    int N;
    long long result = 0;
    vector<int> weight;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        weight.push_back(a);
    }

    sort(weight.begin(), weight.end());

    for (int i = 0; i < N; i++)
    {
        if(weight[i] <= result + 1)
        {
            result += weight[i];
        }
        else
        {
            break;
        }
    }
    cout << result + 1;
}