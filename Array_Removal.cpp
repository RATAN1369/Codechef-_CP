#include<bits/stdc++.h>
using namespace std;

#define ll long long ;



//we need to make the or 2^x-1
// 2^x is somewhat like 1000000000...0000
//2^x-1-> will be like 11111111111111111111
//as we know that 1 or 0=1


//example arr=1,17,18,5,6
    // 10010->18
    // 10000->16
    // 10001->17
    // 00001->1
    // 00101->5
// 16 and 17 wull be removed








void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    int mxi = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mxi = max(mxi, v[i]);
    }// finds the max element in the array

    vector<int> check;
    int high = 0;
    int z = 1;
    while (z < mxi) {
        z *= 2;
        high++;//find the highest bit that is set 
    }
    for (int i = 0; i <=high ; i++) {//iterates from bit 0 to high 
        bool flag = true;
        for (auto it : v) {
            if ((it & (1 << i)) != 0) {
                flag = false;
                break;
            }
        }
        if (flag) check.push_back(i);//if every bit is zero then just remove all the elements which have set bit after that as well 
    }
   
    vector<int> vis(n, 0);
    for (auto it : check) {
        for (int i = 0; i < n; i++) {
            if ((v[i] & (1 << it)) == 0 && !vis[i] && v[i]>>it!=0) {
               ans++;
                vis[i] = 1; 
            }
        }
    }
    cout << ans << endl;
}

int main() {
   int t;
   cin>>t;
   while(t--){
       solve();
   }
    return 0;
}
