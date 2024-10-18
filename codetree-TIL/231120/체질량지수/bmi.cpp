#include <iostream>
using namespace std;

int main() {
    int kg;
    float m;

    cin >> m >> kg;

    m = m/100;
    int bmi = kg/(m*m);

    cout << (int)bmi;

    if(bmi >= 25){
        cout << endl << "Obesity";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}