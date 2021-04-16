//
// Created by Minhaz on 3/7/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;

    cin >> t;
    while (t--){
        ll row,col,c;
        cin >> row >> col;
        if(row==col) c=row*row-row+1;
        if(row > col && row%2==0) c=row*row-col+1;
        else if(row > col && row%2==1) {row--;c=row*row+col;}
        if(col > row && col%2==1) c=col*col-row+1;
        else if(col > row && col%2==0) {col--;c=col*col+row;}
        cout << c <<endl;

    }
    return 0;
}
