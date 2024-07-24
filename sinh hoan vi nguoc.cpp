#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<vector<int>> v;

int n, ok;
void ktao()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        a.push_back(i + 1);
    v.push_back(a);
}

void sinh()
{
    int i = n - 2;
    while (a[i] > a[i + 1] && i >= 0)
        --i;
    if (i == -1) {
        ok = 0;
    } else {
        int j = n - 1;
        while (a[i] > a[j])
            --j;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.end());
        v.push_back(a);
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
            sinh();
        }
        // cout << endl;
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                cout << v[i][j];
            }
            cout << endl;
        }
        a.clear();
        v.clear();
    }
}