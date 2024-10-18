#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, sum = 0;

    for(;;){
        cin >> n;
        if((n < 20) || (n >= 30)) break;

        cnt++;
        sum += n;
    }

    cout << fixed;
    cout.precision(2);
    cout << (float)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}