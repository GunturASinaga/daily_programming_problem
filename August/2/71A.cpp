#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string coba(){
    string b; 
    cin >> b;

    if(b.size() > 10){
        string o = b[0] + b[b.size()-1] + "";
        return o;
    } else{
        return b;
    }
}

int main(){
    string a = "";

    // a += coba() + "\n";
    // cout << a;
    cout << coba() << endl;
}

