#include <cstdint>
#include "iostream"
#include "cmath"
using namespace std;

//int power(int base, int exp) {
//    int result = 1;
//    while (exp > 0) {
//        if (exp % 2 == 1) {
//            result *= base;
//        }
//        base *= base;
//        exp /= 2;
//    }
//    return result;
//}

int64_t def(int64_t n){
    if(n == 1) return 3;
    return pow(def(n-1), 2) + 3;
}

int main(){
    int64_t n;
    cin >> n;
    cout << def(n);
}