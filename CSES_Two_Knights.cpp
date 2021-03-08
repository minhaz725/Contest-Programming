//
// Created by Minhaz on 3/7/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll x;
    cin >> n;
    for(ll i=1 ;i <=n; i++) {
        x= (i*i*(i*i-1) - 4*2 - 8*3 - (i-4)*4*4 - 4*4 - (i-4)*6*4 - (i-4)*(i-4)*8)/2;
        cout << x << endl;
    }

    return 0;
}
