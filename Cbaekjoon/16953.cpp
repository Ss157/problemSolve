#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int A, B, result = 0;
    cin >> A >> B;
    while(A != B)
    {
        if(B < A)
        {
            result = -1;
            break;
        }
        if(B % 2 == 0)
        {
            B /= 2;
        }
        else if(B % 10 == 1)
        {
            B /= 10;
        }
        else
        {
            result = -1;
            break;
        }
        result++;
    }
    if(result == -1)
        cout << result;
    else
        cout << result + 1;
}