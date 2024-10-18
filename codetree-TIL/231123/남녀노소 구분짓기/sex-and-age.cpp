#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a == 0){
        if(b >= 19){
            cout << "MAN";
        }
        else{
            cout << "BOY";
        }
    }
    else if(a == 1){
         if(b >= 19){
            cout << "WOMAN";
        }
        else{
            cout << "GIRL";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}