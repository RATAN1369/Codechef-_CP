#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//three posibilities are there either choose the most frequent element as x
// choose the minimum element as x 
// choose 1 as x 
//ignore the variable names 
void solve(){
    ll n;
    cin>>n;
    unordered_map<int,int> mp;
    int min_element=INT_MAX;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        min_element=min(x,min_element);
        mp[x]++;
    }
    int max_elem=0;
    int mini=INT_MIN;
    for(auto it: mp){
        if(it.second>mini){
            max_elem=it.first;
            mini=max(mini,it.second);
        }
    }
      long long int pos1=(n-mini)*max_elem; // most frequqent element as x 
     long long int pos2=min_element*(n-mp[min_element]); // minimum element as x 
     long long int pos3=(n-mp[1]); // 1 as x 
    long long  int hello=min(pos2,pos3);
    
    cout<<min(pos1,hello)<<endl;
    
    

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