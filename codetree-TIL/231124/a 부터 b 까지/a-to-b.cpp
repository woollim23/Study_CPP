#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    do
    {
        cout << a << " ";
        if((a % 2) != 0){
            a *= 2;
        }
        else{
            a += 3;
        }
    }while (a <= b);
    // 여기에 코드를 작성해주세요.
    return 0;
}