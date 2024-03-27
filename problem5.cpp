#include "iostream"
using namespace std;

void def(int n, int a, int b){
    if(n){
        def(n - 1,b, a + b);
        cout << a << " ";
    }
}

int main(){
    int n, a = 0, b = 1;
    cin >> n;
    def(n, a, b);
}