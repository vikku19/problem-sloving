#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int decToBinary(int n) 
{ 
    // Size of an integer is assumed to be 32 bits 
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            cout << "1"; 
        else
            cout << "0"; 
    } 
} 
}