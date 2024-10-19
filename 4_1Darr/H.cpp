#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; N-1>i; i+=2){
        swap(arr[i],arr[i+1]);
}

for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i < N - 1) {
            cout << " ";
    }
}
return 0;
}