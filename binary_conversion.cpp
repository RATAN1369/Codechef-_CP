#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//binary conerseion 
//codefchef starter 143c

void solve(){
    ll n,k;cin>>n>>k;
string s,x;
cin>>s>>x;
int cnt=0;
int cnt1=0;
int cntx=0;
int cntx1=0;
for(ll i=0; i<n; i++){
    if(s[i]=='0') cnt++;
    if(s[i]=='1') cnt1++;
    if(x[i]=='0') cntx++;
    if(x[i]=='1') cntx1++;
}
ll zeros=0;
ll ones=0;
if(cnt!=cntx || cnt1!=cntx1){
    cout<<"NO"<<endl;
}
else{
    for(int i=0; i<n; i++){
        if(s[i]!=x[i] && s[i]=='0') zeros++;
        else if(s[i]!=x[i] && s[i]=='1') ones++;
    }
    if(ones==0&& k%2==0){
        cout<<"YES"<<endl;
    }
    
   else if(ones!=zeros){
        cout<<"NO"<<endl;
    }
    
    else if( k==ones){
        cout<<"YES"<<endl;
    }
    else if( k>ones && (cnt>=2 || cnt1>=2)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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