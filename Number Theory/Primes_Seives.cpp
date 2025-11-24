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
int seive[N + 1];

// works for l,r <= 1e8 for q queries
void Seives()
{
    // seive[0] = seive[1] = 0 --> this wil be by default
    // due declared globally
    for (int i = 2; i <= N; i++)
    {
        seive[i] = 1;
    }

    // j = i * i  , but below is optimized
    for (int i = 2; i * i <= N; i++)
    {
        if (seive[i] == 0)
            continue;
        // j = 2*i , but below is optimized
        for (int j = i * i; j <= N; j += i)
        {
            seive[j] = 0;
        }
    }

   
}
void rutu()
{
    // if we want to calculate seive in range l,r;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            cnt += seive[i]; // will cnt the primes in range
        }
        cout << cnt << '\n';
    }
}
int32_t main()
{
    //  freopen("input.in", "r", stdin);
    //  freopen("output.out", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        rutu();
    }
    return 0;
}
