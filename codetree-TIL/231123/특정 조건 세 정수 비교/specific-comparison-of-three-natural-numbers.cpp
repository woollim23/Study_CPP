#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if((a <= b) && (a <= c)){
        cout << 1 << " ";
    }
    else{
        cout << 0 << " ";
    }

    if((a == b) && (a == c)){
        cout << 1 << " ";
    }
    else{
        cout << 0 << " ";
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}