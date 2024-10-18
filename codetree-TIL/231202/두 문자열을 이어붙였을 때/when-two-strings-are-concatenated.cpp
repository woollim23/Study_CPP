#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    string s1 = A + B;
    string s2 = B + A;

    bool ch = true;

    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i]) ch = false;
    }

    if(ch) cout << "true";
    else cout << "false";
    // 여기에 코드를 작성해주세요.
    return 0;
}