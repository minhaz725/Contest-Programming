//
// Created by Minhaz on 3/6/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {

    int n;
    cin >> n;
    ll x,y,r=0;
    cin >> y;
    while (n-- > 1)
    {
        cin >> x;
        if(x < y) r = r+ (y-x);
        else y=x;
       // cout<< r << "\n";
    }
    cout << r;
    return 0;
}
