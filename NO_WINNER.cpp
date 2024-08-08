    
   /*ratan_03*/
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

void print(vector<ll> v){ //can use for debugging 
    ll n=v.size();
    for(ll i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}




void solve(){
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    if(a==b || a==c){
        yes;return;
    }
    vector<ll> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    if(v[0]+m>=v[1] || v[1]+m>=v[2]){
        yes;return;
    }
   no;
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