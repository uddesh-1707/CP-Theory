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


// keeping it in long long is imp 
// but i declare int as long long 

int Binary_Expo(int base , int x){
    int ans = 1;

    while(x > 0){
        if(x % 2 == 1){
            ans = (ans * base) % MOD;
            x = x-1;
        }else{
            base = (base * base) % MOD;
        }
    }
    return ans; // no need here for mod 
}
void rutu()
{
    
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
