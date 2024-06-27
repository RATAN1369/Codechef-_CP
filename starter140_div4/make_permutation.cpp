#include<bits/stdc++.h>
using namespace std;
#define ll long long 


// we want to make a permutation 
// a permutation of N is an array of  1,2,3 .... N in any permutation for example N=3, [2,1,3] , [1,2,3] ,[3,2,1] all are permutation but [1,2,4], [1,5] is not a permutation 
// we have give two array A of size N and we want to make a permutation of size N by using this relation C[i]=A[i]+B[i]
// here A is the give array 
// B we need to design 
// C is the permuation array 

// so from the relation we can see that 
// B[i]=c[i]-A[i]
// if we sort the array 
// and assume the C to be from 1 to N 
// then we can say that B will be nothing but i-A[i] if it is negative then we can return -1; else it is possible to generate an array B
// for example 
// A=[1,3,2,4] sort it -> A=[1,2,3,4]
// C=[1,2,3,4] so bw will be B[i]=c[i]-A[i]
// B=[0,0,0,0] all the elemnts of B is non-negative so it is possible 

// for example 
// A=[1,1,2,4] sort it -> A=[1,1,2,4]
// C=[1,2,3,4] so bw will be B[i]=c[i]-A[i]
// B=[0,1,0,0] all the elemnts of B is non-negative so it is possible 


// for example 
// A=[1,3,3,4] sort it -> A=[1,3,3,4]
// C=[1,2,3,4] so bw will be B[i]=c[i]-A[i]
// B=[0,-1,0,0] all the elemnts of B is negative so it is not possible 



//code 

void solve(){
    ll n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    bool y=true;
    sort(v.begin(),v.end());
    for(int i=1; i<=n; i++){
        int x;
        x=i-v[i];
        if(x<0){
            cout<<"NO"<<endl;
            y=false;
            break;
        }
    }
    if(y){
        cout<<"YES"<<endl;
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