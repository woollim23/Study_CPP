#include <iostream>
using namespace std;

int main() {
    int n;
    
    for(;;){
        cin >> n;
        if(n == 1){
            cout << "John";
        }
        else if(n == 2){
            cout << "Tom";
        }
        else if(n == 3){
            cout << "Paul";
        }
        else if(n == 4){
            cout << "Sam";
        }
        else{
            cout << "Vacancy";
            break;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}