#include <iostream>
using namespace std;

int func(int* a, int* b, int n1, int n2){
    int cnt = 0;

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(j==0 && a[i]!=b[j]) break;
            if(a[i+j] == b[j]){
                cnt++;
            }
        }
        if(cnt == n2) break;
    }
    if(cnt == n2) return true;
    else return false;
}

int main() {
    int n1, n2;
    int a[100];
    int b[100];

    cin >> n1 >> n2;

    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }

    if(func(a, b, n1, n2)) cout << "Yes";
    else cout << "No";

    // 여기에 코드를 작성해주세요.
    return 0;
}