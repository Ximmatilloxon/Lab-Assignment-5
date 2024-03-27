#include "iostream"
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

int def(int n){
    if(n == 1) return 3;
    return power(def(n - 1), 2) + 3;
}

int main(){
    int n;
    cin >> n;
    cout << def(n);
}