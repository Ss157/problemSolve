#include <iostream>
#include <cstring>
#include <set>

using namespace std;
int num;
void add(set<int> *s)
{
    cin >> num;
    s->insert(num);
}

void remove(set<int> *s)
{
    cin >> num;
    s->erase(num);
}

void check(set<int> *s)
{
    cin >> num;
    cout << s->count(num) << "\n";
}

void toggle(set<int> *s)
{
    cin >> num;
    if (s->count(num) == 1)
        s->erase(num);
    else
        s->insert(num);
}

void all(set<int> *s)
{
    for (int i = 1; i < 21; i++)
    {
        s->insert(i);
    }
}

void empty(set<int> *s)
{
    s->clear();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int M;
    set<int> s;
    char command[10];
    cin >> M;
    while (M--)
    {
        cin >> command;
        if (!strcmp(command, "add"))
            add(&s);
        else if (!strcmp(command, "remove"))
            remove(&s);
        else if (!strcmp(command, "check"))
            check(&s);
        else if (!strcmp(command, "toggle"))
            toggle(&s);
        else if (!strcmp(command, "all"))
            all(&s);
        else if (!strcmp(command, "empty"))
            empty(&s);
    }
}