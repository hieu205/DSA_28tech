#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;
void ktao()
{
    cin >> n;
    k = n;
    for (int i = 1; i <= n; i++)
        a[i] = 1;
}

void sinh()
{
    int i = n;
    while (a[i] == n && i >= 1)
        --i;
    if (i == 0)
        ok = 0;
    else {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
            a[j] = 1;
    }
    int main()
    {
        ktao();
        string s = "";
        for (int i = 1; i <= n; i++) {
            s += 'A' + i - 1;
        }
        do {
            ok = 1;
            while (ok) {
                cout << s;
                for (int i = 1; i <= n; i++)
                    cout << a[i];
                cout << endl;
                sinh();
            }
            for (int i = 1; i <= n; i++)
                a[i] = 1;
        } while (next_permutation(s.begin(), s.end()));
    }