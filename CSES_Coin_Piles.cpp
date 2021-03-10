//
// Created by Minhaz on 3/10/2021.
//


#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(2*a - b >=0 && (2*a - b)%3 ==0 && 2*b - a >=0 && (2*b - a)%3==0) cout << "YES"<<"\n";
        else cout << "NO"<<"\n";
    }

    return 0;


}
