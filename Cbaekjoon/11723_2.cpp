#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int M, num, S = 0;
    char command[10];
    cin >> M;

    while (M--)
    {
        cin >> command;
        if (!strcmp(command, "add"))
        {
            cin >> num;
            S |= 1 << num;
        }
        else if (!strcmp(command, "remove"))
        {
            cin >> num;
            S &= ~(1 << num);
        }
        else if (!strcmp(command, "check"))
        {
            cin >> num;
            if (S & (1 << num))
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (!strcmp(command, "toggle"))
        {
            cin >> num;
            S ^= 1 << num;
        }
        else if (!strcmp(command, "all"))
        {
            S = (1 << 21) - 1;
        }
        else if (!strcmp(command, "empty"))
        {
            S = 0;
        }
    }
}