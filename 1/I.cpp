#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int last_digit = n % 10;   
    int middle_digit = (n / 10) % 10;  
    int first_digit = n / 100;     

    int sum = first_digit + middle_digit + last_digit; 
    cout << sum;

    return 0;
}