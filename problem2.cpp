#include "iostream"
#include "cmath"
using namespace std;

int def(int n){
    if(n == 1) return 3;
    return (pow(def(n - 1), 2) + 3);
}

int main(){
    int n;
    cin >> n;
    cout << def(n);
}