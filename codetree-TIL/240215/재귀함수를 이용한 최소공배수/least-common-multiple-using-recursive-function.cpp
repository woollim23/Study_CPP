#include <iostream>
using namespace std;

int func(int arr[], int n){
    if(n == 0) return 1;
    
    return func(arr, n-1) * arr[n-1];
}

int main() {
    int arr[10];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= func(arr, n); i++){
        bool check = true;

        for(int j = 0; j < n; j++){
            if(i%arr[j]!=0) check = false;
        }

        if(check){
            cout << i;
            break;
        }
        else if(check == false && i == func(arr, n)) cout << func(arr, n);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}