#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//the number of distinct element can vary from 1 to (dist_element)
//so count the frequencies of different element then sort then in decreasing order than just calculate the number theory to get the ans 

// ex- arr= 1,1,1,1,1,2 
// frequencies -
// 1->5, 2->1
//if we take numer_of_dist_element=1
// k will be 5 as 5%2==0
// if we take number_of_dist_element=2
// k will be 6 as 6%2==0
//so the ans will be 6 .......
void solve(){
    ll n; cin>>n;
    vector<ll> x(n);
    ll maxi=-1;
    for(int i=0; i<n; i++){
        cin>>x[i];
        maxi=max(x[i],maxi);
    }
    vector<ll> hash(maxi+1,0);
    for(auto i: x){
        hash[i]++;
    }
    vector<ll> v;
    for(auto i: hash){
        if(i!=0){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll ans=v.size();
    ll el=0;
    for(int i=0; i<v.size(); i++){
        el+=v[i];
        if(el%(i+1)==0){
            ans=max(ans,el);
        }
        else{
            ans=max(ans,el-(el%(i+1)));
        }
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