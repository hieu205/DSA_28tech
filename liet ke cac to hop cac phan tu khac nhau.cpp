#include <bits/stdc++.h>
using namespace std;

int n, k, ok;
set<int> se;
vector<int> a;
int b[100];
void ktao()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
    for (auto x : se) {
        a.push_back(x);
    }
    n = a.size();
    for (int i = 1; i <= k; i++)
        b[i] = i;
}

void sinh()
{
    int i = k;
    while (b[i] == n - k + i && i >= 1) {
        --i;
    }
    if (i == 0)
        ok = 0;
    else {
        b[i] += 1;
        for (int j = i + 1; j <= k; j++)
            b[j] = b[j - 1] + 1;
    }
}
int main()
{
    ktao();
    ok = 1;
    while (ok) {
        for (int i = 1; i <= k; i++)
            cout << a[b[i] - 1] << " ";
        cout << endl;
        sinh();
    }
}