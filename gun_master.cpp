#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
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






void solve(){
   ll n; cin>>n; 
   ll d; cin>>d;
   vector<ll> v(n);
   for(ll i=0; i<n; i++) cin>>v[i];
   ll ans=0;
   bool prev=1;
   if(v[0]<=d) prev=1;
   else {
       prev=0;
       ans++;
   }
   for(int i=1; i<n; i++){
       if(v[i]<=d && prev==0){
           ans++;
           prev=1;
       }
       else if(v[i]>d && prev==1){
           ans++;
           prev=0;
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