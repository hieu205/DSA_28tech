#include <bits/stdc++.h>
using namespace std;

string s;

void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        --i;
    }
    // if (i == -1) {
    //     for (int i = 0; i < s.size(); i++)
    //         s[i] = '1';
    // }
    if (i > 0)
        s[i] = '1';
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        sinh();
        cout << s << " ";
        cout << endl;
    }
}