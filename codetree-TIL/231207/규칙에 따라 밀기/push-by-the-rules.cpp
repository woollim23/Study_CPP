#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, lr;

    cin >> A >> lr;

    for(int i = 0; i < lr.length(); i++)
    {
        if(lr[i] == 'L')
        {
            A = A.substr(1) + A.substr(0, 1);
        }
        else if(lr[i] == 'R')
        {
            A = A.substr(A.length()-1, 1) + A.substr(0, A.length()-1);
        }
    }

    cout << A;
    // 여기에 코드를 작성해주세요.
    return 0;
}