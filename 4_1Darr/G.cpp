#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; N>i; ++i){
        cout << arr[N-i-1];
         if (i < N - 1) {
            cout << " ";
    }
}
}