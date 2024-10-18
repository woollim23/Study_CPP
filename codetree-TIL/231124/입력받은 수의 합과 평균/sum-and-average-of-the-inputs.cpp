#include <iostream>
using namespace std;

int main() {
    int a, n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a;
        sum += a;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum/n;
    // 여기에 코드를 작성해주세요.
    return 0;
}