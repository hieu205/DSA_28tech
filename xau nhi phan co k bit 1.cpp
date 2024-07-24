#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], ok, cnt;
void ktao()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n - 1;
    while (a[i] == 1 && i >= 0) {
        a[i] = 0;
        --i;
    }
    if (i == -1)
        ok = 0;
    else {
        a[i] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        ktao();
        ok = 1;
        cnt = 0;
        while (ok) {
            cnt = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 1)
                    ++cnt;
            }
            if (cnt == k) {
                for (int i = 0; i < n; i++)
                    cout << a[i];
                cout << endl;
            }
            sinh();
        }
    }
}