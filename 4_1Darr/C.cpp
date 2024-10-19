#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int array[10000];

    for (int i = 0; i < N; i++){
        cin >> array[i];
    }

    int count= 0;

    for (int i = 0; i < N; i++){
        if(array[i] > 0){
            count++;
    }
}
    cout << count;
    return 0;
}
