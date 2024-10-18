#include <iostream>
using namespace std;

int main() {
    int n;
    
    for(;;){
        cin >> n;
        if(n == 25){
            cout << "Good";
            break;
        }
        else if(n > 25){
            cout << "Lower";
        }
        else{
            cout << "Higher";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}