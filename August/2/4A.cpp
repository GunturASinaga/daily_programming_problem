#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    n -= 2;
    cout << ((n > 0 && n % 2 == 0) ? "YES" : "NO") << endl;
}