#include <iostream>

using namespace std;
int arr[1000001];
int binary_search(int start, int end, int target, int N)
{
    while (start <= end)
    {
        long long sum = 0;
        long long mid = (start + end) / 2;
        for (int i = 0; i < N; i++)
        {
            if (mid < arr[i])
                sum = sum + (arr[i] - mid);
        }
        if (target <= sum)
            start = mid + 1;
        else
            end = mid - 1;
        // cout << mid << " " << sum << " " << start << " " << end << "\n";
    }
    return end;
}

int main(void)
{
    int N, M, max = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }

    cout << binary_search(0, max, M, N);
}