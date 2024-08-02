#include <iostream>

using namespace std;

int N, r, c, ans = 0;

void divi_conq(int x, int y, int len)
{
    if (x == c && y == r)
    {
        cout << ans;
        return;
    }

    if (c < x + len && c >= x && r < y + len && r >= y)
    {
        divi_conq(x, y, len / 2);
        divi_conq(x + len / 2, y, len / 2);
        divi_conq(x, y + len / 2, len / 2);
        divi_conq(x + len / 2, y + len / 2, len / 2);
    }
    else
        ans += len * len;
}
int main(void)
{
    cin >> N >> r >> c;
    divi_conq(0, 0, (1 << N));
    return 0;
}