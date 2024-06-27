#include<bits/stdc++.h>
using namespace std;
#define ll long long 
// we basically need to maximize the earning 
// for example if 2*x>=y so it is better to just take x for n hours 
// otherwise for n/2 hours y then n%2 hours  x 
// example n=10 x=5 y=7
// if we do 1 hours job for 10 hours -> 10*5=50rupees 
// if we  do 2 hours job  for 10 hours -> 5*7=35 rupees 
// example n=10 x=5 y=15
//if we do 1 hours job for 10 hours -> 10*5=50rupees
// if we  do 2 hours job  for 10 hours -> 5*15=75 rupees




//code 
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    if(2*x>=y){
        cout<<n*x<<endl;
    }
    else{
        cout<<y*(n/2)+x*(n%2)<<endl;
    }

}

int main(){
   
    int t;
    cin>>t;
    while(t--){
          solve();      
        
    }
    return 0;
}