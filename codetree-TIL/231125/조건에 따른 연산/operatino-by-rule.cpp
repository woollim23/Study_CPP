#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    while(n < 1000){
        if(n % 2 == 0){
            n = n * 3 + 1;
        }
        else{
            n = n * 2 + 2;
        }
        cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}