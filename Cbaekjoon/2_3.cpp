#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// 이코테 2021 2강 3번 모험가 길드

int N, result, cnt;
vector<int> arr;

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; i++)
    {
        cnt++;
        if(cnt >= arr[i])
        {
            result++;
            cnt = 0;
        }
    }
    cout << result;
}