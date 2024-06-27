#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//we need to find max number of subarrays with same sum 

// take an odd number 
// n=5
// most optmial way is 
// 1 4 2 3 5 -> in this way we have generated three subarrays with sum 5
// n=11
// 1 10 2 9 3 8 4 7 5 6 11 -> generated six arrays with sum 11 which is the most optmial 

// take an odd number
// n=6 
// 1 5 2 4 3 6 -> we can not split it into parts where we will have equal sum 
// 1 6 2 5 3 4 -> we can split into whrere we will have equal sum which is seven an it is the most optimal one  




//code 
void solve(){
    ll n;
    cin>>n;
    if(n%2==0){
         n=n+1;
         for(int i=1; i<=n/2; i++){
                cout<<i<<" ";
                cout<<n-i<<" ";
        }
       
        cout<<endl;
    }
    else{
        for(int i=1; i<=n/2; i++){
                cout<<i<<" ";
                cout<<n-i<<" ";
        }
        cout<<n<<" ";
        cout<<endl;
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