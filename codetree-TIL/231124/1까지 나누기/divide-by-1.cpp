#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; ; i++){
        cnt++;
        if((n /= i) <= 1) break;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}