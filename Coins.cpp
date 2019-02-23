#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    int mx = -1;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    for(int k = mx; k <= 50000; k++) {
        int tar = 0;
        for(int i = 0; i < n; i++) {
            tar += (k - a[i]);
        }
        if(tar > sum) {
            cout << k << "\n";
            return 0;
        }
    }
    return 0;
}
