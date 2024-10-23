#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s, r;
        cin >> s >> r;
        vector<bool> v1(26, false), v2(26, false);
        for (char c : s)
            v1[c - 'a'] = true;
        for (char c : r)
            v2[c - 'a'] = true;
        bool ans = false;
        for (int i = 0; i < 26; i++)
        {
            if (!v1[i] && !v2[i])
            {
                ans = true;
                break;
            }
        }
        (ans) ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}