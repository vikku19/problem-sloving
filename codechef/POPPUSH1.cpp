
#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define ld long double
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n-1;i>=a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define pi 3.1415926535897932384626433832795
#define pqi  priority_queue<int>
#define umpii unordered_map<int,int>
#define vpi  vector<pair<int,int>>
#define umpll unordered_map<ll,ll>
#define mp(x,y) make_pair(x,y)
#define vii  vector<int>
#define pii  pair<int,int>
#define mpii map<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define mpll map<ll,ll>
#define pb push_back
#define eb emplace_back
const ll mod=(ll)1e9+7;
const ll maxi=(ll)1e18;
//char to integer (char-'0')
//Integer to char (char+'0')
int main(){
    IOS;
//    test{
    mpii mp;
        int n;cin>>n;
        int a[n];
        rep(i,0,n){
           cin>>a[i];
           mp[a[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second%2==0){
                cnt+=it.second/2;
            }else{
                cnt+=(it.second+1)/2;
            }
        }
        cout<<cnt<<"\n";
//    }
}
