#include <iostream>
using namespace std;

int main() {
    int n;
    bool check = true;
    cin >> n;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            check = false;
        }
    }

    if(check){
        cout << "N";
    }
    else{
        cout << "C";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}