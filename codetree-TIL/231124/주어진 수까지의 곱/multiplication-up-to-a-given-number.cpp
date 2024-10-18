#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = 1;

    for(int i = a; i <= b; i++){
        res *= i;
    }

    cout << res;
    // 여기에 코드를 작성해주세요.
    return 0;
}