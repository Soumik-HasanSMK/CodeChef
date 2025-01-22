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
        ll n;
        cin >> n;
        vector<ll> smk(n);
        for (ll i = 0; i < n; i++)
            cin >> smk[i];

        ll result = accumulate(smk.begin(), smk.end(), 0ll);
        sort(smk.begin(), smk.end());
        ll s = result;
        for (int i = 0; i < n; i++)
        {
            s -= smk[i];
            result = max(result, s + (i + 1) * (i + 1));
        }
        result = max(result, n * n);
        cout << result << endl;
    }
    return 0;
}