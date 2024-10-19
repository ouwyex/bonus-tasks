#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[35];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int max_value = arr[0];
    for(int i = 1; i < N; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
        }
    }
    cout << max_value << endl;
    return 0;
}
