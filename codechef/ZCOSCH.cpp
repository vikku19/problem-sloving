#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int  main(){
    ll r;
    cin>>r;
    if(r>=1 && r<=50){
        cout<<100<<"\n";
    }else if(r>=51 && r<=100){
        cout<<50<<"\n";
    }else{
        cout<<0<<"\n";
    }
    return 0;
}