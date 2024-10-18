#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << a / b << ".";
    for(int i = 0; i < 20; i++){
        a = (a%b) * 10;
        cout << a / b;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}