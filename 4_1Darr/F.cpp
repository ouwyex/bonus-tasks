#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int array[100];

    for(int i = 0; i < N; i++){
        cin >> array[i];
    }
    int count = 0;
    for(int i = 1; i < N - 1; i++){
        if(array[i] > array[i - 1] && array[i] > array[i + 1]){
            count++;
        }
    }
    cout << count;
    return 0;
}
