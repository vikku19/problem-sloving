#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a<b){
            cout<<"<"<<"\n";
        }else if(a>b){
            cout<<">"<<"\n";
        }else{
            cout<<"="<<"\n";
        }
    }
    return 0;
}