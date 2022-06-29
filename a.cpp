/*=========================================== JAI MATA DI ===================================================*/

// Left Shift(<<) (3<<1)==3*2^1;
// Right Shift(>>)  (3>>1)== 3/(2^1);

#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin >> t sc while (t--)
#define sc ;
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pp pop_back
#define setp(x) cout<<fixed<<setprecision(x)
#define pie 3.14159265358
#define countDigit(n) floor(log10(n) + 1)
#define vll vector<ll>
#define vld vector<ld>
#define vvi vector<vll>
#define pr pair<ll,ll>
#define vpr vector<pr>
#define mkp make_pair
#define mp map<ll, ll>
#define ump unordered_map<ll, ll>
#define mv map<ll, vll>
#define all(a) (a).begin(), (a).end()
#define sz(a) (a).size()
#define bg(a) (a).begin()
#define ed(a) (a).end()
#define fr(n) for(ll i = 0; i < n; i++)
#define fr1(n) for(ll i = 1; i <= n; i++)
#define mod 1000000007
#define mod1 998244353
#define endl "\n"
#define Jai ios::sync_with_stdio(0);
#define Shree cin.tie(0);
#define Ram cout.tie(0);

//pow(2,n) ----> (1ll << n)
ll power(ll x, ll y) {
    ll res = 1;
    while (y) {
        if (y % 2) {
            res = (res * x) % mod1;
            y--;
        }
        y = y / 2;
        x = (x * x) % mod1;
    }
    return res;
}

ll countBits(ll n) {
    ll cnt = 0;
    while (n > 0) {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

const int N = 2e5;
ll a[N + 5];
// ll b[N + 5];

int main()
{
    Jai Shree Ram;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    ll n,l=-1;
    cin>>n;
    vector<string> v, ans;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.pb(s);
    }
    for(int i=0; i<n; i++){
        ll l=-1,x=0,y=0,z=0,k=0,m=0, dt=-1;
        for(int j=0; j<sz(v[i]); j++){
            if(v[i][j]=='@'){
                l=j;
            }
            if(v[i][j]=='.'){
                dt=j;
            }
        }
        if(l!=-1){
            for(int j=0; j<l; j++){
                if((v[i][j]>='a' && v[i][j]<='z') || (v[i][j]>='A' && v[i][j]<='Z')){
                    x++;
                }
                else if(v[i][j]>='0' && v[i][j]<='9'){
                    y++;
                }
                else if(v[i][j]=='-'){
                    z++;
                }
                else if(v[i][j]=='_'){
                    k++;
                }
                else{
                    m++;
                }
            }
            if(m==0 && dt!=-1){
                x=0, m=0;
                for(int j=l+1; j<dt; j++){
                    if((v[i][j]>='a' && v[i][j]<='z') || (v[i][j]>='A' && v[i][j]<='Z')){
                        x++;
                    }
                    else{
                        m++;
                    }
                }
                if(m==0){
                    x=0, m=0;
                    for(int j=dt+1; j<sz(v[i]); j++){
                        if((v[i][j]>='a' && v[i][j]<='z') || (v[i][j]>='A' && v[i][j]<='Z')){
                            x++;
                        }
                        else{
                            m++;
                        }
                    }
                    if(m==0 && x==3){
                        ans.pb(v[i]);
                    }
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<sz(ans); i++){
        cout<<ans[i]<<endl;
    }

}