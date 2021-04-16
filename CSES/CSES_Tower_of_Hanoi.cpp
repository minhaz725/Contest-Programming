//
// Created by Minhaz on 3/15/2021.
//


#include <bits/stdc++.h>

using namespace std;

void toh(int n,int from ,int to,int aux)
{
    if(n==1) {
        cout<<from<< " "<<to<<endl;
        return;
    }
    toh(n-1,from,aux,to);
    cout<<from<< " "<<to<<endl;
    toh(n-1,aux,to,from);


}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << pow(2,n)-1<<endl;
    toh(n,1,3,2);

    return 0;


}
