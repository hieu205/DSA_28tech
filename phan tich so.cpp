#include <bits/stdc++.h>
using namespace std;

int a[100], n, ok, cnt;
void ktao()
{
    cin >> n;
    cnt = 1;
    a[1] = n;
}

void sinh()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1) {
        --i;
    }
    if (i == 0)
        ok = 0;
    else {
        --a[i];
        int d = cnt - i + 1;
        cnt = i;
        int chiahet = d / a[i];
        int chiadu = d % a[i];
        if (chiahet) {
            for (int j = 0; j < chiahet; j++) {
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if (chiadu) {
            ++cnt;
            a[cnt] = chiadu;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        ktao();
        ok = 1;
        while (ok) {
            for (int i = 1; i <= cnt; i++)
                cout << a[i] << " ";
            cout << endl;
            sinh();
        }
    }
}