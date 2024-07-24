#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100], ok;
vector<string> res;
void ktao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n;
    while (a[i] == 1 && i >= 1) {
        a[i] = 0;
        --i;
    }
    if (i == 0)
        ok = 0;
    else
        a[i] = 1;
}

bool check()
{
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i + 1])
            return false;
    }
    return true;
}
int main()
{
    ktao();
    ok = 1;
    while (ok) {
        if (check()) {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << endl;
        }
        sinh();
    }
}