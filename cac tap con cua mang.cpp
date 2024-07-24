#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100], ok;
vector<string> res;
void ktao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    for (int i = 1; i <= n; i++)
        a[i] = 0;
    a[n] = 1;
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

int cmp(string k, string h)
{
    if (h.size() != k.size())
        return k.size() < h.size();
    else
        return k < h;
}
int main()
{
    ktao();
    ok = 1;
    while (ok) {
        string s = "";
        for (int i = 1; i <= n; i++) {
            if (a[i]) {
                s += to_string(x[i]);
                s += " ";
            }
        }
        res.push_back(s);
        sinh();
    }
    sort(res.begin(), res.end(), cmp);
    for (auto x : res)
        cout << x << endl;
}