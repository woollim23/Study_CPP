#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++){
        cin >> a;
        if(((a % 2) != 0) && ((a % 3) == 0)){
            sum += a;
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}