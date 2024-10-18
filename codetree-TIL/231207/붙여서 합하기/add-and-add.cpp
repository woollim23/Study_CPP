#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0;
    string A, B, tmp1, tmp2;
    cin >> A >> B;

    tmp1 = A + B;
    tmp2 = B + A;
    
    sum = stoi(tmp1) + stoi(tmp2);

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}