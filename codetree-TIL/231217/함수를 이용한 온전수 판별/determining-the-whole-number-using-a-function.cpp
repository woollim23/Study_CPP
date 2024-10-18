#include <iostream>
using namespace std;

bool func(int i){
    if((i%2==0)||(i%10==5)||((i%3==0)&&(i%9!=0))) return false;
    else return true;
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(func(i)) cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}