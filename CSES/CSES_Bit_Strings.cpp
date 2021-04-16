//
// Created by Minhaz on 3/8/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,c=1;
    m= pow(10,9) + 7;
    cin >> n;
    for(int i=0; i<n; i++) c=(c*2)%m;
    cout << c;


   // n= n%m;
    //cout << m;


}
