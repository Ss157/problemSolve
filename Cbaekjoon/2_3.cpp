#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// ������ 2021 2�� 3�� ���谡 ���

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