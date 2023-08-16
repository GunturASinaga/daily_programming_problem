#include <bits/stdc++.h>
using namespace std;

// SOLVED
int main(){
    int a; 
    cin >> a;
    int total = 0;

    while(a--){
        int t; 
            t = 0;
        for(int j = 0; j < 3; j++){
            int k;
            cin >> k;
            t += k;
        }
        if(t > 1){
            total++;
        }
    }
    cout << total << endl;
}