
/*                                     ||   #BISMILLAHIR RAHMANIR RAHIM#    ||
                                       ||                                   ||
                                       ||          #RAKIB2004#              ||
*/


#include <bits/stdc++.h>
using namespace std;


#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pii pair<ll, int>
#define arrin(v,n) for(int i=0;i<n;i++)cin>>v[i]
#define arrout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" ";


#ifdef LOCAL
    #define dbg(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
    #define dbg(x)
#endif

template<typename T> void _print(T x) { cerr << x; }
template<typename T, typename V> void _print(pair<T,V> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template<typename T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) _print(i), cerr << " "; cerr << "]"; }
template<typename T> void _print(set<T> s) { cerr << "{ "; for (T i : s) _print(i), cerr << " "; cerr << "}"; }


const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;
const int N = 2e5 + 5;
const int MAX_A = 1'000'001;


void solveByRakib() {
    ll n;
    cin>>n;
    vll v;
    ch = 1;
    while()
    for(int i=0; i<m; i++){
        if(c[i] == 'D'){
            a.insert(a.end(),b[i]);
        }
        if(c[i] == 'V'){    
            a.insert(a.begin(),b[i]);
        }

    }

    cout<<a<<endl;

    
    
}

int main() {
    fastio();

    int t = 1;
    cin >> t;
    while (t--) solveByRakib();

    return 0;
}

