#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    priority_queue<int, vector<int>, greater<int>> q;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
            if (q.empty())
                cout << "0\n";
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }
        else
            q.push(tmp);
    }
}