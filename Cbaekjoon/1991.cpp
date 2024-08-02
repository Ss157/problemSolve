#include <iostream>

using namespace std;
int arr[30][2] = {0};

void preorder(int N)
{
    if (N == -19)
        return;
    cout << (char)(N + 'A');
    preorder(arr[N][0]);
    preorder(arr[N][1]);
}

void inorder(int N)
{
    if (N == -19)
        return;
    inorder(arr[N][0]);
    cout << (char)(N + 'A');
    inorder(arr[N][1]);
}

void postorder(int N)
{
    if (N == -19)
        return;
    postorder(arr[N][0]);
    postorder(arr[N][1]);
    cout << (char)(N + 'A');
}

int main(void)
{
    int N;
    char root, left, right;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> root >> left >> right;
        arr[root - 'A'][0] = left - 'A';
        arr[root - 'A'][1] = right - 'A';
    }
    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);
}