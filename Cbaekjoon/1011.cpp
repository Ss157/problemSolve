#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    long long T, x, y;
    cin >> T;
    while (T--)
    {
        long long ans = 0;
        cin >> x >> y;
        long long gap = y - x;
        long long i;
        for (i = 1; i < 100000; i++)
            if (i * i > gap)
                break;
        i--;
        
        long long remain = gap - i * i;
        ans = 2 * i - 1 + (long long)ceil((double)remain / (double)i);
        cout << ans << endl;
    }
}