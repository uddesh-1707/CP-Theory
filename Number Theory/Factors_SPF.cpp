#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define iv(v, n)      \
    vector<int> v(n); \
    f(i, 0, n) cin >> v[i];
#define ivv(name, n, m)                          \
    vector<vector<int>> name(n, vector<int>(m)); \
    f(i, 0, n) f(j, 0, m) cin >> name[i][j];
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;
#define INF 1e18

using v = vector<int>;
using vv = vector<vector<int>>;

const int N = 1e6;
int spf[N + 1];

// spf stands for smallest prime factor
// works for l,r <= 1e7 for q queries
void SPF()
{
    for (int i = 2; i <= N; i++)
    {
        spf[i] = i;
    }

    // j = i * i  , but below is optimized
    for (int i = 2; i * i <= N; i++)
    {
        if (spf[i] != i)
            continue;
        // j = 2*i , but below is optimized
        for (int j = i * i; j <= N; j += i)
        {
            if (spf[j] == j)
            {
                spf[j] = i;
            }
        }
    } 
}
void rutu()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        while (n > 1)
        {
            cout << spf[n] << " ";
            n = n / spf[n];
        }
        cout << '\n';
    }
}
int32_t main()
{
    //  freopen("input.in", "r", stdin);
    //  freopen("output.out", "w", stdout);

    // seive[0] = seive[1] = 0 --> this wil be by default
    // due declared globally

    int t = 1;
    // cin >> t;
    while (t--)
    {
        rutu();
    }
    return 0;
}
