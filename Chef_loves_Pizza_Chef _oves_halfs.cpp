#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// if x is power of 2 then the answer will be zero 



void solve(){
    ll x;
    cin>>x;
    for(int i=0; i<32; i++){
        if((1<<i)==x){//checks that is x is a power of 2 
            cout<<0<<endl;
            return;
        }
    }
  
    ll n=1;
    while(n<x){
        n=n*2;
    }//find the power of 2 just greater than x 
    cout<<2*x-n<<endl;
    // example x=14 in this case n=16 
    // answer will be 2*14-16=12 
    //you can see the images for better understanding 


    // if x=100
    // n=128 
    // ans=2*100-128=72 
    

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