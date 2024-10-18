#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, sum = 0;

    for(int i = 0; i < 10; i++){
        cin >> n;
        if((n >= 0) && (n <= 200)){
            cnt++;
            sum += n;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}