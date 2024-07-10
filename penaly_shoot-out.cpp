#include<bits/stdc++.h>
using namespace std;
#define ll long long 


//simply check if x==y 
// if(x<y) that means we need to increase x which we can do by +1 or +2 
//if(x>y) that means we need to increase x which we can do by +1 only 

void solve(){
    ll x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"YES"<<endl;
    }
    else if(x<y){
        x++;
        if(x==y){
            cout<<"YES"<<endl;
            return;
        }
        x++;
        if(x==y){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        
    }
    else{
        y++;
        if(x==y){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        
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