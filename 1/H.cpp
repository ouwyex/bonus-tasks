#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b = a/10;
    while(b>9){
        b = b%10;
    }
    cout << b;
    return 0;
}