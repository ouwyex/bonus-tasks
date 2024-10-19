#include <iostream>
using namespace std;

int main(){
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    int arr[1000];
    for(int i = 0; i < N; i++){
        arr[i] = i + 1;
    }
    for(int i = A - 1, j = B - 1; i < j; i++, j--){
        swap(arr[i], arr[j]);
    }
    for(int i = C - 1, j = D - 1; i < j; i++, j--){
        swap(arr[i], arr[j]);
    }
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
