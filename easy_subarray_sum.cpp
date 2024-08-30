    
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
vector<ll> seive(1000000,1);
void precom(vector<ll>&seive){
    for(ll i=2; i*i<1e6; i++){
        if(seive[i]==0) continue;
        for(ll j=2*i; j<1e6; j+=i ){
            seive[j]=0;
        }
    }
}
bool isp(ll n){
    if(seive[n]!=0) return 1;
    return 0;
}
void sortv(vector<ll> &v){
    sort(v.begin(),v.end());
    return;
}


void solve(){
   ll n; cin>>n;
   ll neg=0;ll f=1e9; ll l=-1;
   vector<ll> v(n);
   for(ll i=0; i<n; i++){
       cin>>v[i];
       if(v[i]<0) neg++;
       if(v[i]>0){
           f=min(f,i);
           l=max(l,i);
       }
   }
   if(neg==n){
       cout<<0<<endl;return;
   }
   neg=0;
   for(ll i=f; i<=l; i++){
       if(v[i]<0) neg++;
   }
   cout<<neg<<endl;

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
