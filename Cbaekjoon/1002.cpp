#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int T, x1, y1, r1, x2, y2, r2;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else
        {
            int distance = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
            if (distance < (r1 + r2) * (r1 + r2) && abs(r1 - r2) * abs(r1 - r2) < distance)
            {
                printf("2\n");
            }
            else if (distance == (r1 + r2) * (r1 + r2) || distance == abs(r1 - r2) * abs(r1 - r2))
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }
}