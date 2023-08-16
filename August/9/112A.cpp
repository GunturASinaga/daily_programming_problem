#include <bits/stdc++.h>

using namespace std;

// SOLVED

int main(){
    string a,b;
    cin >> a >> b;
    short c = 0; 

    for(int i = 0; i < a.size(); i++){
        if(a[i] < 97){
            a[i] += 32;
        }
        if(b[i] < 97){
            b[i] += 32;
        }
        if(a[i] > b[i]){
            c = 1;
            break;
        } else if(a[i] < b[i]){
            c = -1;
            break;
        }
    }

    cout << c << endl;
}
