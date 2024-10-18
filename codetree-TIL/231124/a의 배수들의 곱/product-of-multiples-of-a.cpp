#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = 1;

    for(int i = 1; i <= b; i++){
        if(i % a == 0){
            res *= i;
        }
    }

    cout << res;
    // 여기에 코드를 작성해주세요.
    return 0;
}