#include <iostream>
#include <cstring>

// ������ 2021 2�� 2�� ���ϱ� Ȥ�� ���ϱ�

using namespace std;

int main(void)
{
    string num;
    int result = 0;
    cin >> num;
    result = num.at(0) - '0';
    for (int i = 1; i < num.length(); i++)
    {
        if (num.at(i) <= '1' || result <= 1)
        {
            result += num.at(i) - '0';
        }
        else
        {
            result *= num.at(i) - '0';
        }

        // cout << num.at(i) << " " << result << "\n";
    }
    cout << result;
}