#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll, ll> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define se second 
#define in(a) cin>>  a;
#define sz(a) a.size();
#define out(a) cout<<  a;
#define all(x) (x).begin(), (x).end()
#define rep(a) for(int i = 0; i < (a); i++)
#define vll vector<ll> 
#define vi vector<int >
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;

int n;
void solve(){
    faster;
    //int n;
    cin >> n;
    cin.ignore();
    
    for (int i = 1; i <= n;i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string num;
        vll a;
        while (ss >> num) {
            a.push_back(stoll(num));
        }    
        sort(all(a));
        for(auto x : a) {
            cout<<i<<' '<<x<<endl;
        }
    }
}
int main()
{
    
    faster;
    solve();
}
