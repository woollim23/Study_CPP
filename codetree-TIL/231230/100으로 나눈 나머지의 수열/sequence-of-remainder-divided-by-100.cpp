#include <iostream>
using namespace std;

int func(int n){
    if(n == 1) return 2;
    else if(n == 2) return 4;

    return (func(n-1)*func(n-2))%100;
}

int main() {
    int n;
    cin >> n;

    cout << func(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}