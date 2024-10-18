#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0, cnt = 0;

    for(int i = a; i <= b; i++){
        if(((i % 5) == 0) || ((i % 7) == 0)){
            sum += i;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}