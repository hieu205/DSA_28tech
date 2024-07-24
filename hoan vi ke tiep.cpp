#include <bits/stdc++.h>
using namespace std;

string a;
int ok;

void sinh()
{
    int n = a.size();
    int i = n - 2;
    while (a[i] >= a[i + 1] && i >= 0) {
        --i;
    }
    if (i == -1) {
        cout << "BIGGEST" << endl;
    } else {
        int j = n - 1;
        while (a[i] >= a[j])
            --j;
        // cout << a[i] << " " << a[j] << endl;
        swap(a[i], a[j]);
        int l = i + 1, r = n - 1;
        while (l <= r) {
            swap(a[l], a[r]);
            l++, r--;
        }
        cout << a << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << x << " ";
        cin >> a;
        sinh();
    }
}