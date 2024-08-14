    
   /*ratan_03*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define one cout<<-1<<"\n"
#define M 1000000007

long long int gcd(ll a , ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) { // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}
ll fact(int n){
    if(n==0) return 1;
    else return (n*fact(n-1))%M;
}
vector<int> calculateZ(string s) {
    int n = s.length();
    vector<int> Z(n);
    int L = 0, R = 0;

    for (int i = 1; i < n; i++) {
        if (i > R) {
            L = R = i;
            while (R < n && s[R-L] == s[R]) R++;
            Z[i] = R-L; R--;
        } else {
            int k = i-L;
            if (Z[k] < R-i+1) Z[i] = Z[k];
            else {
                L = i;
                while (R < n && s[R-L] == s[R]) R++;
                Z[i] = R-L; R--;
            }
        }
    }
    return Z;
}


void print(vector<ll> v){ //can use for debugging 
    ll n=v.size();
    for(ll i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
bool is_prime(ll n){
    for(ll i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}



void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        mp[v[i]]++;
    }
    if(mp.size()==1){
        for(auto it: mp){
            if(it.first==1){
                cout<<-1<<endl;
            }
            else{
                cout<<1<<" "<<2<<endl;
            }
        }
        return;
    }
    if(mp.size()==2){
        if(mp[2]==1 && mp.find(1)!=mp.end()){
            cout<<-1<<endl;
            return;
        }
    }
    ll find=0;
    for(auto it: mp){
        if(it.second>=2 && it.first!=1){
            find=it.first;
            break;
        }
    }
    vector<ll> ans;
    if(find!=0){
        for(ll i=0; i<n; i++){
        if(v[i]==find){
            ans.push_back(i+1);
            if(ans.size()==2){
                break;
            }
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return;
    }
    
    for(ll i=0; i<n; i++){
         if(v[i]==1){
             for(ll j=i+1; j<n; j++){
                 if(v[j]!=1 && v[j]!=2){
                     cout<<i+1<<" "<<j+1<<endl;
                     return;
                 }
             }
         }
         else{
             for(ll j=i+1; j<n; j++){
                 if(is_prime(v[i]+v[j])==0){
                     cout<<i+1<<" "<<j+1<<endl;
                     return;
                 }
             }
         }
    }
    cout<<-1<<endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
          solve();        
    }
    return 0;
}
