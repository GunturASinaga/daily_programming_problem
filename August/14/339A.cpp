#include <bits/stdc++.h>

// ACCEPTED

using namespace std;

int main(){
    string a;
    cin >> a;

    for(int i = 0; i < a.length(); i++){
        for(int j = 0; j < i; j++){
            if(a[j] > a[i]){
                swap(a[j], a[i]);
            }
        }
    }


    cout << a[a.length()/2];
    for(int i = a.length()/2 + 1 ; i < a.length(); i++){
        cout << '+' <<  a[i];
    }

    cout << endl;
}