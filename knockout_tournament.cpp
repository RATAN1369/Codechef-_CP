    
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
    vector<ll> v(16);
    for(ll i=0; i<16; i++){
        cin>>v[i];
    }
    vector<pair<ll,ll>> x;
    vector<ll> y=v;
    sort(y.begin(),y.end());
    for(ll i=1; i<=16; i++){
        x.push_back({i,y[i-1]});
    }
    sort(x.begin(),x.end());
    for(auto i: v){
        ll el=i;
        for(auto it: x){
            if(it.second==el){
                if(it.first==1){
                    cout<<0<<" ";
                }
                else if(it.first>1 && it.first<4){
                    cout<<1<<" ";
                }else if(it.first>=4 && it.first<8){
                    cout<<2<<" ";
                }else if(it.first>=8 && it.first<16 ){
                    cout<<3<<" ";
                }else if(it.first==16){
                    cout<<4<<" ";
                }
                break;
            }
        }
    }
    cout<<endl;
    
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
