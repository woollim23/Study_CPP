#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    while(A.find(B) != string::npos)
    {
        int n = A.find(B);
        
        if(n == 0)
        {
            A = A.substr(B.length());
        }
        else
        {
            A = A.substr(0, n) + A.substr(n + B.length());
        }
    }
    cout << A <<endl;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}