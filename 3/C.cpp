#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    for(int i=a;b>=i;++i){
        int square = sqrt(i);
        if(square * square == i){
            cout << i <<endl;
        }
    }
return 0;
}