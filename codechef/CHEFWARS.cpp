#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define REP(i,n) for(int i=0;i<n;i++)
#define REPJ(j,n) for(int j=0;j<n;j++)
#define PER(i,n) for(int i=n;i>0;i--)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define REPJ1(j,n) for(int j=1;j<=n;j++)
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back()
int main()
{
	IOS;
	test{
		ll h,p,q=0,r=0;
		cin>>h>>p;
/*		int a[n];
		REP(i,n){
			cin>>a[i];
		}
        */
        if(h<=p){
            cout<<"1"<<"\n";
        }else{
            while(h!=0 || p!=0){
                h=h-p;
                p=floor(p/2);
                if(h<=0){
                    q++;
                    break;
                }else if(p<=0){
                    r++;
                    break;
                }
            }
            if(q<=0){
                cout<<"0"<<"\n";
            }else if(r<=0){
                cout<<"1"<<"\n";
            }
        }
	}
	re;
}
