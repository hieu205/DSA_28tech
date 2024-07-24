#include <bits/stdc++.h>
using namespace std;

vector<string> res;
int n, ok;
string s;

void ktao()
{
    s = string(n, '6');
}

void sinh()
{
    int i = n - 1;
    while (s[i] == '8' && i >= 0) {
        s[i] = '6';
        --i;
    }
    if (i == -1)
        ok = 0;
    else
        s[i] = '8';
}

void init()
{
    for (int i = 1; i < 14; i++) {
        n = i;
        ktao();
        ok = 1;
        while (ok) {
            string tam = s;
            reverse(tam.begin(), tam.end());
            res.push_back(s + tam);
            sinh();
        }
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
            cout << res[i] << " ";
        cout << endl;
    }
}