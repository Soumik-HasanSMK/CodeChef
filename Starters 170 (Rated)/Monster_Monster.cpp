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
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        ll mx = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            v[i] = v[i] + x * (n - 1 - i);
            mx = max(mx, v[i]);
        }
        cout << mx << endl;
    }
    return 0;
}