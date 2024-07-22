#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//maximum coins 
//codechef starter 143
//used greedy strategy to solve this 


void solve(){
 ll n,x; ll ans=0;
 cin>>n>>x;
 for(int i=1; i<=x; i++){
     ans+=(ll)pow(2,(n-i+1));
 }
 for(int i=1; i<=(n-x); i++){
     ans-=(ll)pow(2,i);
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