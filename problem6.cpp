#include "iostream"
using namespace std;

bool def(const string& s, int l, int r){
    if(l == r) return true;
    if(s[l] != s[r]) return false;
    return def(s, l + 1, r - 1);
}

int main(){
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    cout << def(s, l, r);
}