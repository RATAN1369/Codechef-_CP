#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//main thing here is the constraints as they are very less we can use O(N*N) soltuion instead of thing it as sliding window problem 

void solve(){
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    if(n==m){
        int ans=0;
        for(int i=0; i<m; i++){
            if(a[i]!=b[i]) ans++;
        }
        cout<<ans<<endl;
    }
    else{
        int ans=INT_MAX;
        bool x=false;
        
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<m; j++){
                if(i+j>=n) {
                    x=true;
                    break;
                }
                if(a[i+j]!=b[j] ) cnt++;
            }
            if(x) break;
            ans=min(ans,cnt);
        }
   
        cout<<ans<<endl;
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