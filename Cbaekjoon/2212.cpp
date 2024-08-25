#include <bits/stdc++.h>

// 그리디 알고리즘 #25

using namespace std;

int main(void)
{
    vector<int> sensors, diff;
    int N, K;
    long long result = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sensors.push_back(a);
    }

    sort(sensors.begin(), sensors.end());

    for (int i = 0; i < N - 1; i++)
    {
        diff.push_back(sensors[i + 1] - sensors[i]);
    }

    sort(diff.begin(), diff.end());
    // cout << "size " << diff.size();
    for (int i = 0; i < N - K; i++)
    {
        result += diff[i];
    }
    
    cout << result;
}