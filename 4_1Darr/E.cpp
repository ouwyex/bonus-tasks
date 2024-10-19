#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[10000];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
}
    for(int i = 1; i < N; i++){
        if((arr[i] > 0 && arr[i - 1] > 0) || (arr[i] < 0 && arr[i - 1] < 0)) {
            cout << "YES";
            return 0;
    }
}
    cout << "NO";
    return 0;
}
