#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;

double def(int n){
    if(n == 1) return 1.0;
    return (pow(-1, n - 1)/n) + def(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << setprecision(4) << def(n);
}