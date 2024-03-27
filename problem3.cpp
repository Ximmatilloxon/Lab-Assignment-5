#include "iostream"
using namespace std;

int def(int n, int k){
    if(k == 0 || k == n) return 1;
    return def(n - 1, k - 1) + def(n - 1, k);
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << def(n, k);
}