//
// Created by Minhaz on 3/5/2021.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    long int n;
    cin >> n;
    while (n > 1) {


        if (n % 2 == 0) {
            cout << n << " ";
            n /= 2;
        }
        else {
            cout << n << " ";
            n = 3 * n + 1;
        }
    }
    cout << n;
    return 0;
}
