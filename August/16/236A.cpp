#include <bits/stdc++.h>
#include <set>

//ACCEPTED

using namespace std;

int main(){
    string a; 
    cin >> a;
    set<char> b;
    for(int i = 0; i < a.length(); i++){
        b.insert(a[i]);
    }

    if(b.size() % 2 == 0){
        cout << "CHAT WITH HER!\n";
    } else{
        cout << "IGNORE HIM!\n";
    }
}