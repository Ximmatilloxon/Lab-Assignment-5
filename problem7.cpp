#include "iostream"
using namespace std;

string def(const string& s, int l, int r){
    if(l == r){
        string a(1, s[r]);
        return a;
    }
    return s[l] + def(s, l + 1, r);
}

int main(){
    string s;
    getline(cin, s);
    int l, r;
    cin >> l >> r;
    cout << def(s, l, r);
}