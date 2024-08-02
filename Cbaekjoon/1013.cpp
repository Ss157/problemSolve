#include <iostream>
#include <cstring>
#include <regex>

using namespace std;

int main(void)
{
    int T, idx = 0;
    string arr;
    cin >> T;

    while (T--)
    {
        idx = 0;
        cin >> arr;

        regex pattern("(100+1+|01)+");
        if (regex_match(arr, pattern))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}