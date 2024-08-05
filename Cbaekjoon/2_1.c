#include <iostream>
// 이코테 2021 2강 1번
using namespace std;

int main(void)
{
    int N, K, cnt = 0;
    cin >> N >> K;

    while (true)
    {
        int target = (N / K) * K;
        cnt += N - target;
        N = target;
        if (N < K)
            break;
        N /= K;
        cnt++;
    }
    cnt += N - 1;
    cout << cnt;
}