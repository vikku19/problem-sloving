#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9'){
                sum+=str[i]-'0';
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}