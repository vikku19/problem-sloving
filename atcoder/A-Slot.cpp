#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    if(str[0]==str[1] && str[1]==str[2]){
        cout<<"Won\n";
    }else{
        cout<<"Lost\n";
    }
}