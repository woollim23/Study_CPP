#include <iostream>
using namespace std;
// 수학 > 수학, 수학 더 높은
// 수학 = 수학, 영어 더 높은
int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    if(a1 > b1){
        cout << "A";
    }
    else if(a1 == b1){
        if(a2 > b2){
            cout << "A";
        }
        else{
            cout << "B";
        }
    }
    else{
        cout << "B";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}