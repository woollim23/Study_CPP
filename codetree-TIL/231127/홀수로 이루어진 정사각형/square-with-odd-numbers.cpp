#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << 10 + (2*i+1) + (2*j) << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}