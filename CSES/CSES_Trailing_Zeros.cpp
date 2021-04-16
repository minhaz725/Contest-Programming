//
// Created by Minhaz on 3/8/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,c=0;
    cin >> n;
    for(ll i=5 ; n/i >= 1 ; i=i*5)
    {
        c=c+n/i;
    }
    cout << c;


    // n= n%m;
    //cout << m;


}
