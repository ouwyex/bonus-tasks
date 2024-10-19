#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=a;b>=i;++i){
        if(i%d==c){
            cout << i << " ";
        }
    }
return 0;
}