
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n;i>a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define pi 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vii  vector<int>
#define vll vector<ll>
#define pii  pair<int,int>
#define pll pair<ll,ll>
#define vpi  vector<pair<int,int>>
#define mpll map<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
void WCD(vector<pll>v,ll count){
    if(count!=0){
        cout<<2<<"\n";
    }else{
        
    }
}
int main(){
    IOS;
    ll count=0;
    vector<pll>v;
    test{
        ll a,b;
        cin>>a>>b;
        if(a%2==0 || b%2==0) count++;
        v.eb(mp(a,b));
    }
re;
}
