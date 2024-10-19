#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int array[100];

    for(int i = 0; i < N; i++){
        cin >> array[i];
    }

    for(int i = 0; i < N; i += 2){
        cout << array[i] << " ";
    }
    return 0;
}
