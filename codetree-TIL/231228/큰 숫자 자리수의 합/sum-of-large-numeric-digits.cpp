#include <iostream>
using namespace std;

int func(int a){
    if(a < 10) return a%10;
    else{
        return func(a/10) + a%10;
    }
    
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << func(a*b*c);
    // 여기에 코드를 작성해주세요.
    return 0;
}