#include <iostream>

using namespace std;

int main(void)
{
    string A, B, C;
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - stoi(C) << "\n";
    string tmp = A + B;
    cout << stoi(tmp) - stoi(C);
}