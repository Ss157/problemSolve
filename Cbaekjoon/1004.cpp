#include <stdio.h>
// #include <iostream>
#include <math.h>

int main(void)
{
    int T, x1, x2, y1, y2;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int n, cx, cy, r, cnt = 0;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d %d %d", &cx, &cy, &r);
            int distance1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
            int distance2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
            if (distance1 < r * r && distance2 < r * r)
                ;
            else if (distance1 < r * r)
                cnt++;
            else if (distance2 < r * r)
                cnt++;
        }
        printf("%d\n", cnt);
    }
}