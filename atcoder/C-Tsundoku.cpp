
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define PER(i,b,a) for(ll i=b;i>a;i--)
#define REP1(i,a,b) for(ll i=a;i<=b;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define PI 3.1415926535897932384626
#define MOD (ll)1000000007
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll MAXI = (ll)1e9+7;
int main(){
    IOS;
//    test{
        ll n,m,k;
        cin>>n>>m>>k;
        vll v1(n),v2(m);
        REP1(i,1,n){
            cin>>v1[i];
        }
        REP1(i,1,m){
            cin>>v2[i];
        }
        if(n>=m){
            for(ll i=1;i<=n;i++){
                if(v1[i]>=v2[i]){
                    sum+=v1[i];
                }
            }
        }
//    }
re;
}
