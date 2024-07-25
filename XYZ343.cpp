#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll x,y,z; cin>>x>>y>>z;
    ll keep=0;
    ll sum=0;
    if(x*y<=z){
        cout<<0<<endl;
    }
    else{
        while(sum<=z){
        sum+=y;
        keep++;
    }
    cout<<x-keep+1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
          solve();      
        
    }
    return 0;
}