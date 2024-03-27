#include "iostream"
#include "iomanip"
using namespace std;

double def(int n){
    if(n == 1) return 4;
    return ((1.0/2.0)*def(n - 1) - 1);
}

int main(){
    int n;
    cin >> n;
    cout << std::setprecision(10) << def(n);
}