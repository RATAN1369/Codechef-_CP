#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//CODE
#include<bits/stdc++.h>
using namespace std;

// Define a type alias for long long
#define ll long long 

// Function to solve the given problem
void solve(){
    // Declare two variables n and m of type long long
    ll n, m;
    // Read the values of n and m from the input
    cin >> n >> m;
    
    // Declare a vector 'a' of size n to store the input values
    vector<int> a(n);
    // Declare an unordered map 'st' to store the frequency of remainders
    unordered_map<int, int> st;
    
    // Loop to read n elements into vector 'a' and store their remainders when divided by m
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = a[i] % m;
    }
    
    // Loop to read n elements and count their remainders when divided by m in the unordered map 'st'
    for(int j = 0; j < n; j++){
        int x;
        cin >> x;
        st[x % m]++;
    }
    
    // Variable to store the final answer
    long long ans = 0;
    
    // Special case when m is 1
    if(m == 1){
        // If m is 1, every number modulo 1 is 0, so there are n*n pairs
        cout << n * n << endl;
    }
    else{
        // General case
        for(int i = 0; i < n; i++){
            // If the remainder is 0, add the frequency of 0 in 'st' to 'ans'
            if(a[i] == 0){
                ans += st[0];
            }
            else{
                // Otherwise, find the complement remainder 'm - a[i]'
                int find = m - a[i];
                // Add the frequency of the complement remainder to 'ans'
                ans += st[find];
            }
        }
        // Output the final answer
        cout << ans << endl;
    }
}

// Main function
int main(){
    // Optimize input and output
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    // Variable to store the number of test cases
    int t;
    // Read the number of test cases
    cin >> t;
    // Loop over each test case
    while(t--){
        // Solve the problem for each test case
        solve();      
    }
    
    return 0;
}



// MY CODE 

// void solve(){
//     ll n,m;
//     cin>>n>>m;
//     vector<int> a(n);
//     unordered_map<int,int> st;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         a[i]=a[i]%m;
//     }
//     for(int j=0; j<n; j++){
//         int x;
//         cin>>x;
//         st[x%m]++;
//     }
//     long long ans=0;
//     if(m==1){
//         cout<<n*n<<endl;
//     }
//     else{
//         for(int i=0; i<n; i++){
//              if(a[i]==0){
//                  ans+=st[0];
//              }
//              else{
//                  int find=m-a[i];
//                  ans+=st[find];
//              }
             
//         }
//         cout<<ans<<endl;
//     }
    
    

// }

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//           solve();      
        
//     }
//     return 0;
// }