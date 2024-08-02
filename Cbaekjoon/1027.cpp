#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> building_height;
    vector<int> cnt(N, 0);

    int tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;

        building_height.push_back(tmp);
    }

    double max_level = -1000000000;
    for (int i = 0; i < N; i++)
    {
        max_level = -1000000000;
        for (int j = i + 1; j < N; j++)
        {
            double level = ((double)(building_height[j] - building_height[i]) / (double)(j - i));
            if (max_level < level)
            {
                cnt[i]++;
                cnt[j]++;
                max_level = level;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (ans < cnt[i])
        {
            ans = cnt[i];
        }
    }

    cout << ans << endl;
}