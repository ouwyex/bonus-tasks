#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N; 
    int z = 0, p = 0, n = 0;
    int num;

    for (int i = 0; i < N; i++){
        cin >> num;
        if (num == 0){
            z++;
        } 
        else if(num > 0){
            p++;
        } 
        else{
            n++;
        }
}
    cout << z << " " << p << " " << n;
    return 0;
}

