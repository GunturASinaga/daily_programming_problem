#include <bits/stdc++.h>

using namespace std;

// SOLVED

int main(){
    int n;
    cin >> n;
    int total = 0;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        if(a[1] == '+'){
            total++;
        } else{
            total--;
        }
    }

    cout << total << endl;
}