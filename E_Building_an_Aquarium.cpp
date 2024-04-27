#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;
    while (q--)
    {
        int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
sort(a.begin(),a.end());

    auto ok = [&](long long m) {
        long long total = 0;
        for (int i = 0;i < n;i++) {
            total +=max ((m-a[i]),0LL);
          
        }
         
             if (total <= t) {
                return true;}
       else  return false;
        };

    long long  l = 0, r = 2.1e9+7, mid, ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    }
    
    return 0;
}