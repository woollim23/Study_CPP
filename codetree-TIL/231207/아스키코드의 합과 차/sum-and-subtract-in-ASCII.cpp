#include <iostream>
#include <string>
using namespace std;

int main() {
    char a, b;
    int A, B;

    cin >> a >> b;

    A = (int)a;
    B = (int)b;

    cout << a + b << " ";

    if(A > B) cout << A - B;
    else cout << B - A;
    // 여기에 코드를 작성해주세요.
    return 0;
}