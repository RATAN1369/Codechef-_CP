#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//first i calculated howmuch extra money i have 
// then distibuted among the one which were less than x to do so i used greedy way to maximize the count !!
void solve(){
      ll n,x;cin>>n>>x;
       vector<ll> v(n);
       for(ll i=0; i<n; i++) cin>>v[i];
       ll have=0;
       ll ans=0;
       ll ind=-1;
       sort(v.begin(),v.end());
       for(int i=0; i<n; i++){
           if(v[i]>=x){
               ind=i;
               break;
           }
       }
       if(ind!=-1) ans+=(n-ind);
       else{
           cout<<0<<endl;
           return;
       }
       for(int i=ind; i<n; i++){
           have+=(v[i]-x);
       }
       for(int i=ind-1; i>=0; i-- ){
           if(have>=(x-v[i]) ){
               have-=(x-v[i]);
              ans++;
           }
           else break;
       }
       cout<<ans<<endl;
     
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