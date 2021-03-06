//
// Created by Minhaz on 3/6/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {

    ll n;
    cin >> n;
    if(n==1) {cout<< 1;return 0;}
    if(n<=3) {cout<< "NO SOLUTION";return 0;}
    else{
        for(int i=2;i<=n;i=i+2) cout<< i << " ";
        for(int i=1;i<=n;i=i+2) cout<< i << " ";

    }
    return 0;
}
