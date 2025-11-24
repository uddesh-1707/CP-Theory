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


// Is also know as trial division method
// this is prime factorization
vector<int> factors(int n)
{
    vector<int> f;
    for (int x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1)
        f.push_back(n);
    return f;
}

void rutu()
{
    vector v = factors(12);
    for(auto it : v){
        cout << it << " ";
    }
    cout << '\n';
    
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
