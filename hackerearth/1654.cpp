#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int cnt=1;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]){
            cnt++;
        }
    }
}