#include <bits/stdc++.h>

// 그리디 알고리즘 #24

using namespace std;

int main(void)
{
    string maxA, maxB;
    cin >> maxA >> maxB;
    string minA(maxA), minB(maxB);
    for (int i = 0; i < maxA.size(); i++)
    {
        if (maxA[i] == '5' || maxA[i] == '6')
        {
            minA[i] = '5';
            maxA[i] = '6';
        }
    }

    for (int i = 0; i < maxB.size(); i++)
    {
        if (maxB[i] == '5' || maxB[i] == '6')
        {
            minB[i] = '5';
            maxB[i] = '6';
        }
    }

    cout << stoi(minA) + stoi(minB) << " " << stoi(maxA) + stoi(maxB);
}