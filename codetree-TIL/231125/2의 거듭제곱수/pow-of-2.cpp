#include <iostream>
using namespace std;

int main() {
    int n, res = 1, x = 0;
    cin >> n;

    while(n != res){
        res *= 2;
        x++;
    }
    cout << x;
    // 여기에 코드를 작성해주세요.
    return 0;
}