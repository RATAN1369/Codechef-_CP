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
       ll n; cin>>n; string s;
       cin>>s;ll cnt0=0;
       for(ll i=0; i<n; i++){
           if(s[i]=='0') cnt0++;
       }
      if(cnt0==n ){
          if(n==1){
              cout<<1<<endl;
          }
          else if(n>=2){
              cout<<2<<endl;
          }
          return;
      }
      if(cnt0==0){
          cout<<0<<endl;
          return;
      }
    //   calculate number of 0 substr and 1 substr
        ll zero=0;
        ll ones=0;
        vector<ll> length;
        for(ll i=0; i<n; ){
            if(s[i]=='0'){
                zero++;
                ll len=0;
                while(s[i]=='0'){
                    len++;
                    i++;
                }
                length.push_back(len);
               
            }
            else{
                 ones++;
                while(s[i]=='1'){
                    i++;
                } 
               
            }
        }
        sort(length.begin(),length.end());
        if(ones>zero){
            cout<<0<<endl;
        }
        else if(ones==zero){
            cout<<1<<endl;
        }
        else{
            ll ans=0;
            zero=zero-ones;
            for(ll i=0; i<=zero;i++ ){
                 ans++;
            }
            cout<<ans<<endl;
        }
        
        
    //   cout<<zero<<" "<<ones<<endl;
       
       
     

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